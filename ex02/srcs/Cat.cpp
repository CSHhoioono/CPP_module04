/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:30:07 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/23 16:15:31 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain_ = new Brain();
	std::cout << "Default constructor(Cat class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Cat::Cat(const Cat& copyObj) : Animal(copyObj)
{
	this->brain_ = new Brain(*(copyObj.brain_));
	std::cout << "Copy constructor(Cat class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Cat&	Cat::operator=(const Cat& copyObj)
{
	this->Animal::operator=(copyObj);
	*(this->brain_) = *(copyObj.brain_);
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\nDestructor(Cat class)>> "\
		<< this->type_ << " has been destroyed." << std::endl;
	delete this->brain_;
}

void	Cat::makeSound() const
{
	std::cout << "The cat is meowing." << std::endl;
}

std::string	Cat::getBrain(int index) const
{
	return (this->brain_->getIdea(index));
}

void	Cat::setBrain(std::string idea) const
{
	this->brain_->setIdea(idea);
}

void	Cat::clearBrain() const
{
	this->brain_->clearBrain();
}
