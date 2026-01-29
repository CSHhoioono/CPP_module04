/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:55:32 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/29 17:11:47 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "MateriaSource.hpp"
# include <string>
# include <iostream>

class Character : public ICharacter
{
	private:
		std::string		name_;
		AMateria*		slot_[4];
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &copyObj);
		Character&	operator=(Character const &copyObj);
		~Character();

		//virtual part inherited from ICharacter
		std::string const	&getName() const;
		bool	isSame(AMateria* m);
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
