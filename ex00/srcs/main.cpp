/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:09:14 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/22 16:27:58 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

static void	print_msg(std::string msg)
{
	std::cout << std::endl << "****************************"\
		<< msg << "****************************" << std::endl;
}

int	main(void)//upcasting test (The presence or absence of the virtual keyword)
{
	print_msg("Constructor: Animal and Dog and Cat");
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	print_msg("Constructor: WrongCat");
	const WrongAnimal*	wrong = new WrongCat();

	std::cout << std::endl;
	print_msg("getType Function test: Nomal class");
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;
	print_msg("getType Function test: Wrong class");
	std::cout << wrong->getType() << " " << std::endl;

	std::cout << std::endl;
	print_msg("makeSound Function test: Nomal class");
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	print_msg("makeSound Function test: Wrong class");
	wrong->makeSound();


	print_msg("Destructor");
	delete meta;
	delete i;
	delete j;
	delete wrong;
	return (0);
}
