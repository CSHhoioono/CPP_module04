/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:41:51 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/22 16:36:53 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("Animal")
{
	std::cout << "Default constructor(Animal class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Animal::Animal(const Animal& copyObj)
{
	*this = copyObj;
	std::cout << "Copy constructor(Animal class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Animal&	Animal::operator=(const Animal& copyObj)
{
	this->type_ = copyObj.type_;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "\nDestructor(Animal class)>> "\
		<< this->type_ << " has been destroyed." << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "The animal is making an unknown sound." << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type_);
}
