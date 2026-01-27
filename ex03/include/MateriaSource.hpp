/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:28:00 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/27 17:41:31 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMeteria.hpp"
# include <string>
# include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
		 AMeteria*	storage_[4];
		 int		index_;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &copyObj);
		MateriaSource&	operator=(MateriaSource const &copyObj);
		~MateriaSource();

		void	learnMateria(AMeteria* learnObj);
		AMeteria*	createMateria(std::string const & type);
};

#endif
