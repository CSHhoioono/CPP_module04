/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:41:29 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/20 17:40:28 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	protected:
		std::string	type_;
	public:
		Animal();
		Animal(const Animal& copyObj);
		Animal&	operator=(const Animal& copyObj);
		virtual ~Animal();
};

#endif
