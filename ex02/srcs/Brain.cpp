/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:12:23 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/23 16:36:35 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : index_(0)
{
	std::cout << "Default constructor(Brain class)>> "\
		<< "Brain" << " has been created.\n" << std::endl;
}

Brain::Brain(const Brain& copyObj)
{
	*this = copyObj;
	std::cout << "Copy constructor(Brain class)>> "\
		<< "Brain" << " has been created.\n" << std::endl;
}

Brain&	Brain::operator=(const Brain& copyObj)
{
	this->clearBrain();
	for (this->index_ = 0; this->index_ < copyObj.index_; (this->index_)++)
		this->ideas[this->index_] = copyObj.ideas[this->index_];
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	this->clearBrain();
	std::cout << "\nDestructor(Brain class)>> "\
		<< "Brain" << " has been destroyed." << std::endl;
}

std::string	Brain::getIdea(int index)
{
	if (this->ideas[index].empty() == true)
		std::cout << "Incorrect index." << std::endl;
	return (this->ideas[index]);
}

void	Brain::setIdea(std::string idea)
{
	this->ideas[(this->index_)++] = idea;
	if (this->index_ == 100)
		this->index_ %= 100;
}

void	Brain::clearBrain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i].clear();
	this->index_ = 0;
}
