/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:27:52 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/23 16:38:29 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class Dog : virtual public Animal
{
	private:
		Brain*	brain_;
	public:
		Dog();
		Dog(const Dog& copyObj);
		Dog&	operator=(const Dog& copyObj);
		virtual ~Dog();
		virtual void	makeSound() const;
		std::string	getBrain(int index) const;
		void	setBrain(std::string idea) const;
		void	clearBrain() const;
};

#endif
