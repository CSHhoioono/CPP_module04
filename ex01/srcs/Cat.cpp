/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:30:07 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/22 16:34:16 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type_ = "Cat";
	std::cout << "Default constructor(Cat class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Cat::Cat(const Cat& copyObj)
{
	*this = copyObj;
	std::cout << "Copy constructor(Cat class)>> "\
		<< this->type_ << " has been created.\n" << std::endl;
}

Cat&	Cat::operator=(const Cat& copyObj)
{
	this->Animal::operator=(copyObj);
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\nDestructor(Cat class)>> "\
		<< this->type_ << " has been destroyed." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "The cat is meowing." << std::endl;
}
