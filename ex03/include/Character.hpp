/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:55:32 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/27 17:40:22 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMeteria.hpp"
# include "MateriaSource.hpp"
# include <string>
# include <iostream>

class Character : public ICharacter
{
	private:
		std::string		name_;
		MateriaSource	inventory;
		AMeteria*		slot_[4];
	public:
		Character(std::string const &name);
		Character(Character const &copyObj);
		Character&	operator=(Character const &copyObj);
		~Character();

		//virtual part inherited from ICharacter
		std::string const	&getName() const;
		void	equip(AMeteria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
