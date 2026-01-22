/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:31:54 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/22 16:37:04 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("Animal")
{
	std::cout << "Default constructor(WrongAnimal class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copyObj)
{
	*this = copyObj;
	std::cout << "Copy constructor(WrongAnimal class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& copyObj)
{
	this->type_ = copyObj.type_;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\nDestructor(WrongAnimal class)>> "\
		<< this->type_ << " has been destroyed." << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "The animal is making an unknown sound." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type_);
}
