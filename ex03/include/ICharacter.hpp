/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:50:12 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/26 17:19:39 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMeteria.hpp"
# include <string>
# include <iostream>

class ICharacter
{
	public:
		virtual	~ICharacter() {}
		virtual std::string const	&getName() const = 0;
		virtual void	equip(AMeteria* m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;
};

#endif
