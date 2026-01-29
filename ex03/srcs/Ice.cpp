/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:52:39 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/29 17:11:47 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default constructor(Ice class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

Ice::Ice(Ice const & copyObj) : AMateria(copyObj)
{
	std::cout << "Copy constructor(Ice class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

Ice&	Ice::operator=(Ice const & copyObj)
{
	this->AMateria::operator=(copyObj);
	return (*this);
}

Ice::~Ice()
{
	std::cout << "\nDestructor(Ice class)>> "\
		<< "Object" << " has been destroyed." << std::endl;
}

Ice*	Ice::clone() const
{
	// Ice	*clone = new Ice(*this);
	std::cout << "Function(Ice::clone)>> A Ice clone has been created."\
		<< std::endl;
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "Function(Ice::use)>> "\
		<< "Ice: \"* shoots and ice bolt at "\
		<< target.getName() << " *\"" << std::endl;
}
