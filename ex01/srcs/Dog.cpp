/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:27:51 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/22 16:34:16 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type_ = "Dog";
	std::cout << "Default constructor(Dog class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Dog::Dog(const Dog& copyObj)
{
	this->Animal::operator=(copyObj);
	std::cout << "Copy constructor(Dog class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Dog&	Dog::operator=(const Dog& copyObj)
{
	this->type_ = copyObj.type_;
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
