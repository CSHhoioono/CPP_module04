/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:28:00 by soochoi           #+#    #+#             */
/*   Updated: 2026/03/07 15:36:14 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <string>
# include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
		 AMateria*	storage_[4];
		 int		index_;
		 bool	isSame(AMateria* m);
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &copyObj);
		MateriaSource&	operator=(MateriaSource const &copyObj);
		~MateriaSource();

		void	learnMateria(AMateria* learnObj);
		AMateria*	createMateria(std::string const & type);
};

#endif
