/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:29:44 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/22 15:35:10 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <string>
# include <iostream>

class Cat : virtual public Animal
{
	public:
		Cat();
		Cat(const Cat& copyObj);
		Cat&	operator=(const Cat& copyObj);
		virtual ~Cat();
		virtual void	makeSound() const;
};

#endif
