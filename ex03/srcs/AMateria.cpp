/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:40:00 by soochoi           #+#    #+#             */
/*   Updated: 2026/03/07 13:56:26 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type_("default")
{
	std::cout << "Default constructor(AMateria class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

AMateria::AMateria(std::string const &type) : type_(type)
{
	std::cout << "String constructor(AMateria class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

AMateria::AMateria(AMateria const &copyObj) : type_(copyObj.type_)
{
	std::cout << "copyObj constructor(AMateria class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

AMateria&	AMateria::operator=(AMateria const &copyObj)
{
	if (this != &copyObj)
    {
		this->type_ = copyObj.type_;
    }
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "\nDestructor(AMateria class)>> "\
		<< "Object" << " has been destroyed." << std::endl;
}

std::string const	&AMateria::getType() const {return (this->type_);}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Function(AMateria::use)>> "\
		<< "AMateria: Taking no action to " << target.getName()\
		<< std::endl;
}
