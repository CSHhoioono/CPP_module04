/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:46:01 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/23 14:33:28 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
	std::cout << "Default constructor(WrongCat class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copyObj) : WrongAnimal(copyObj.type_)
{
	std::cout << "Copy constructor(WrongCat class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& copyObj)
{
	this->WrongAnimal::operator=(copyObj);
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "\nDestructor(WrongCat class)>> "\
		<< this->type_ << " has been destroyed." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "The cat is meowing." << std::endl;
}
