/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:52:17 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/29 17:11:47 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <string>
# include <iostream>

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & copyObj);
		Ice&	operator=(Ice const & copyObj);
		~Ice();

		Ice*	clone() const;
		void	use(ICharacter& target);
};

#endif
