/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:09:14 by soochoi           #+#    #+#             */
/*   Updated: 2026/03/07 16:18:14 by soochoi          ###   ########.fr       */
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
	AMateria* tmp = new Cure();
	src->learnMateria(tmp);
	tmp = new Ice();
	src->learnMateria(tmp);
	src->learnMateria(tmp);
	tmp = new Cure();
	src->learnMateria(tmp);
	tmp = new Ice();
	src->learnMateria(tmp);
	delete tmp;

	std::cout << std::endl << std::endl;

	print_msg("Character constructor");
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	std::cout << std::endl << std::endl;

	print_msg("function test: createMateria || equip");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	//The inventory is already full.
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("oce");
	if (!tmp)
		std::cout << "The pointer is null." << std::endl;

	std::cout << std::endl << std::endl;

	print_msg("function test: use");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(0, *bob);
	me->use(4, *bob);

	print_msg("function test: unequip || getSlot");
	//empty slot_
	me->unequip(0);
	//invalid index
	me->unequip(4);
	tmp = me->getSlot(2);
	me->unequip(2);
	delete tmp;

	print_msg("Destructor");
	delete bob;
	delete me;
	delete src;
	return 0;
}
