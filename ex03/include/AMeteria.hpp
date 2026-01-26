/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMeteria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:45:30 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/26 16:02:54 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMETERIA_HPP
# define AMETERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMeteria
{
	protected:
		std::string	type_;

	public:
		AMeteria();
		AMeteria(std::string const &type);
		AMeteria(AMeteria const &copyObj);
		AMeteria&	operator=(AMeteria const &copyObj);
		virtual ~AMeteria();

		std::string const	&getType() const;

		virtual AMeteria*	clone() const = 0;
		virtual void	use(ICharacter& target);
};

#endif
