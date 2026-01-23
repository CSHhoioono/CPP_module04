/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:27:51 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/23 16:15:31 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain_ = new Brain();
	std::cout << "Default constructor(Dog class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Dog::Dog(const Dog& copyObj) : Animal(copyObj)
{
	this->brain_ = new Brain(*(copyObj.brain_));
	std::cout << "Copy constructor(Dog class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Dog&	Dog::operator=(const Dog& copyObj)
{
	this->Animal::operator=(copyObj);
	*(this->brain_) = *(copyObj.brain_);
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "\nDestructor(Dog class)>> "\
		<< this->type_ << " has been destroyed." << std::endl;
	delete this->brain_;
}

void	Dog::makeSound() const
{
	std::cout << "The dog is barking." << std::endl;
}

std::string	Dog::getBrain(int index) const
{
	return (this->brain_->getIdea(index));
}

void	Dog::setBrain(std::string idea) const
{
	this->brain_->setIdea(idea);
}

void	Dog::clearBrain() const
{
	this->brain_->clearBrain();
}
