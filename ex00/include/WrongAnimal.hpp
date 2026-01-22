/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:31:56 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/22 16:39:53 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type_;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copyObj);
		WrongAnimal&	operator=(const WrongAnimal& copyObj);
		//if there is no virtual keyword, a memory leak occurs.
		virtual	~WrongAnimal();
		void	makeSound() const;
		std::string	getType() const;
};

#endif

