/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:45:30 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/29 17:11:47 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMETERIA_HPP
# define AMETERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type_;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &copyObj);
		AMateria&	operator=(AMateria const &copyObj);
		virtual ~AMateria();

		std::string const	&getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharacter& target);
};

#endif
