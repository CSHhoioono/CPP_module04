/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 17:31:35 by soochoi           #+#    #+#             */
/*   Updated: 2026/03/07 13:44:38 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "Default constructor(ICharacter class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

ICharacter::ICharacter(ICharacter const &copyObj)
{
	*this = copyObj;
	std::cout << "copyObj constructor(ICharacter class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

//do nothing
ICharacter&	ICharacter::operator=(ICharacter const &copyObj)
{
	if (this != &copyObj)
    {
        (void)copyObj;
    }
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

ICharacter::~ICharacter()
{
	std::cout << "\nDestructor(ICharacter class)>> "\
		<< "Object" << " has been destroyed." << std::endl;
}
