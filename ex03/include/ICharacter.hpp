/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:50:12 by soochoi           #+#    #+#             */
/*   Updated: 2026/03/07 15:46:28 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"
# include <string>
# include <iostream>

class AMateria;

class ICharacter
{
	public:
		ICharacter();
		ICharacter(ICharacter const &copyObj);
		ICharacter&	operator=(ICharacter const &copyObj);
		virtual	~ICharacter();

		virtual std::string const	&getName() const = 0;
		virtual AMateria	*getSlot(int idx) const = 0;
		virtual void	equip(AMateria * m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;
};

#endif
