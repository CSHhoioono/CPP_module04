/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:41:51 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/21 17:48:01 by choisoonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("Animal")
{
	std::cout << "Default constructor>> " << this->type_\
		<< " has been created.\n" << std::endl;
}

Animal::Animal(const Animal& copyObj)
{
	*this = copyObj;
	std::cout << "Copy constructor>> " << this->type_\
		<< " has been created.\n" << std::endl;
}

Animal&	Animal::operator=(const Animal& copyObj)
{
	this->type_ = copyObj.type_;
	s	std::cout << "Copy assignment operator called" << std::endl;td::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "\nDestructor>> " << this->type_\
		<< " has been destroyed." << std::endl;
}
