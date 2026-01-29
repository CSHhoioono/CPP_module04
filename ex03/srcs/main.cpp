/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:09:14 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/29 17:15:23 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

static void	print_msg(std::string msg)
{
	std::cout << std::endl << "****************************"\
		<< msg << "****************************" << std::endl;
}

int	main(void)
{
	print_msg("MateriaSource constructor");
	IMateriaSource* src = new MateriaSource();

	print_msg("function test: learnMateria");
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	print_msg("Character constructor");
	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	print_msg("Destructor");
	delete bob;
	delete me;
	delete src;
	return 0;
}
