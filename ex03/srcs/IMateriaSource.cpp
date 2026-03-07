/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 17:31:34 by soochoi           #+#    #+#             */
/*   Updated: 2026/03/07 13:50:26 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "Default constructor(IMateriaSource class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &copyObj)
{
	*this = copyObj;
	std::cout << "copyObj constructor(IMateriaSource class)>> "\
		<< "Object" << " has been created.\n" << std::endl;
}

//do nothing
IMateriaSource&	IMateriaSource::operator=(IMateriaSource const &copyObj)
{
	if (this != &copyObj)
    {
        (void)copyObj;
    }
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "\nDestructor(IMateriaSource class)>> "\
		<< "Object" << " has been destroyed." << std::endl;
}
