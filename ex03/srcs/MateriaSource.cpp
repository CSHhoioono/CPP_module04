/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:30:39 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/29 17:21:26 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : index_(0)
{
	for (int i = 0; i < 4; i++)
		this->storage_[i] = 0;
	std::cout << "Default constructor(MateriaSource class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copyObj) : index_(copyObj.index_)
{
	for (int i = 0; i < 4; i++)
	{
		if (copyObj.storage_[i] == 0)
			break ;
		this->storage_[i] = copyObj.storage_[i]->clone();
	}
	std::cout << "Copy constructor(MateriaSource class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &copyObj)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->storage_[i])
		{
			delete this->storage_[i];
			this->storage_[i] = 0;
		}
		if (copyObj.storage_[i])
			this->storage_[i] = copyObj.storage_[i]->clone();
	}
	this->index_ = copyObj.index_;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->storage_[i])
		{
			delete this->storage_[i];
			this->storage_[i] = 0;
		}
	}
	this->index_ = 0;
	std::cout << "\nDestructor(MateriaSource class)>> "\
		<< "Object" << " has been destroyed." << std::endl;
}

bool	MateriaSource::isSame(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (this->storage_[i] == m)
			return (true);
	return (false);
}

//Because the subject state that the class function of Character
//try to add a Materia to a full inventory,
//nothing should happen.
void	MateriaSource::learnMateria(AMateria* learnObj)
{
	if (this->index_ >= 4)
	{
		std::cout << "Function(MateriaSource::learnMateria)>> "
			<< "Storage space is already full." << std::endl;
		return ;
	}
	if (this->isSame(learnObj))
		this->storage_[this->index_] = learnObj->clone();
	else
		this->storage_[this->index_] = learnObj;
	(this->index_)++;
}

//When attempting to add AMateria while the inventory is full
//,and proceeding with the addition.
// void	MateriaSource::learnMateria(AMateria* learnObj)
// {
// 	if (this->storage_[this->index_])
// 	{
// 		delete this->storage_[this->index_];
// 		this->storage_[this->index_] = 0;
// 	}
// 	this->storage_[this->index_] = learnObj->clone();
// 	++(this->index_) %= 4;
// }

//check whether the storage is null
//And check whether the AMateria is same type.
AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->storage_[i])
			continue ;
		if (this->storage_[i]->getType() == type)
			return (this->storage_[i]->clone());
	}
	return (0);
}
