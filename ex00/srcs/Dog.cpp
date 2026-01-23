/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:27:51 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/23 14:29:31 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Default constructor(Dog class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Dog::Dog(const Dog& copyObj) : Animal(copyObj)
{
	std::cout << "Copy constructor(Dog class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Dog&	Dog::operator=(const Dog& copyObj)
{
	this->Animal::operator=(copyObj);
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "\nDestructor(Dog class)>> "\
		<< this->type_ << " has been destroyed." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "The dog is barking." << std::endl;
}
