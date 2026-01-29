/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:56:58 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/29 17:11:47 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name_("no_name")
{
	for (int i = 0; i < 4; i++)
		this->slot_[i] = 0;
	std::cout << "Default constructor(Character class)>> "\
		<< this->name_ << " has been created.\n" << std::endl;
}

Character::Character(std::string const &name) : name_(name)
{
	for (int i = 0; i < 4; i++)
		this->slot_[i] = 0;
	std::cout << "String constructor(Character class)>> "\
		<< this->name_ << " has been created.\n" << std::endl;
}

Character::Character(Character const &copyObj) : name_(copyObj.name_)
{
	for (int i = 0; i < 4; i++)
	{
		if (copyObj.slot_[i])
			this->slot_[i] = copyObj.slot_[i]->clone();
		else
			this->slot_[i] = 0;
	}
	std::cout << "Copy constructor(Character class)>> "\
		<< this->name_ << " has been created.\n" << std::endl;
}

Character&	Character::operator=(Character const &copyObj)
{
	this->name_ = copyObj.name_;
	for (int i = 0; i < 4; i++)
	{
		if (this->slot_[i])
		{
			delete this->slot_[i];
			this->slot_[i] = 0;
		}
		if (copyObj.slot_[i])
			this->slot_[i] = copyObj.slot_[i]->clone();
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->slot_[i])
		{
			delete this->slot_[i];
			this->slot_[i] = 0;
		}
	}
	std::cout << "\nDestructor(MateriaSource class)>> "\
		<< this->name_ << " has been destroyed." << std::endl;
}

std::string const &	Character::getName() const { return (this->name_); }

bool	Character::isSame(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (this->slot_[i] == m)
			return (true);
	return (false);
}

void	Character::equip(AMateria* m)
{
	int i = 0;

	if (m == 0)
	{
		std::cout << "Function(Character::equip)>> "\
			<< "Materia does not exist." << std::endl;
		return ;
	}
	for (i = 0; i < 4; i++)
		if (this->slot_[i] == 0)
			break ;
	if (i == 4)
	{
		std::cout << "Function(Character::equip)>> "\
			<< "The inventory is already full." << std::endl;
		return ;
	}
	if (this->isSame(m))
		this->slot_[i] = m->clone();
	else
		this->slot_[i] = m;
	std::cout << "Function(Character::equip)>> "\
		<< m->getType() << " has been equipped in slot[" << i << "]"\
		<< std::endl;
}

//Before calling this function(), Save the addresses of items
void	Character::unequip(int idx)
{
	if (idx < 0 || 4 <= idx)
	{
		std::cout << "Function(Character::unequip)>> "\
			<< "An invalid index has been entered." << std::endl;
		return ;
	}
	if (this->slot_[idx] == 0)
	{
		std::cout << "Function(Character::unequip)>> "\
			<< "slot[" << idx << "]: Materia does not exist." << std::endl;
		return ;
	}
	this->slot_[idx] = 0;
	std::cout << "Function(Character::unequip)>> "\
		<< "slot[" << idx << "]: Unequipped" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || 4 <= idx)
	{
		std::cout << "Function(Character::use)>> "\
			<< "An invalid index has been entered." << std::endl;
		return ;
	}
	if (this->slot_[idx] == 0)
	{
		std::cout << "Function(Character::use)>> "\
			<< "slot[" << idx << "]: Materia does not exist." << std::endl;
		return ;
	}
	std::cout << "Function(Character::use)>> " << std::endl;
	this->slot_[idx]->use(target);
	std::cout << std::endl;
	delete this->slot_[idx];
	this->slot_[idx] = 0;
}
