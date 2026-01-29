/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:51:25 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/29 17:11:47 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default constructor(Cure class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

Cure::Cure(Cure const & copyObj) : AMateria(copyObj)
{
	std::cout << "Copy constructor(Cure class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

Cure&	Cure::operator=(Cure const & copyObj)
{
	this->AMateria::operator=(copyObj);
	return (*this);
}

Cure::~Cure()
{
	std::cout << "\nDestructor(Cure class)>> "\
		<< "Object" << " has been destroyed." << std::endl;
}

Cure*	Cure::clone() const
{
	// Cure	*clone = new Cure(*this);
	std::cout << "Function(Cure::clone)>> A Cure clone has been created."\
		<< std::endl;
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "Function(Cure::use)>> "\
		<< "Cure: \"* heals " << target.getName()\
		<< "’s wounds *\"" << std::endl;
}
