/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:09:14 by soochoi           #+#    #+#             */
/*   Updated: 2026/01/26 13:10:38 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Brain.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include <string>
# include <iostream>

static void	print_msg(std::string msg)
{
	std::cout << std::endl << "****************************"\
		<< msg << "****************************" << std::endl;
}

int	main(void)
{
	// print_msg("Abstract Class Test");
	// {
	// 	Animal	*A_ptr = new Animal();
	// 	Animal	A;
	//
	// 	delete A_ptr;
	// }
	print_msg("Upcasting Test");
	{
		const Animal*	farm[10];

		print_msg("constructor Test");
		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
				farm[i] = new Dog();
			else
				farm[i] = new Cat();
		}

		print_msg("function test>> makeSound");
		for(int i = 0; i < 10; i++)
			farm[i]->makeSound();

		print_msg("destructor test");
		for (int i = 0; i < 10; i++)
			delete farm[i];
	}
	std::cout << std::endl << std::endl;

	print_msg("Deep copy Test(Dog class)");
	{
		const Dog*	dog;

		print_msg("constructor Test");
		dog = new Dog();

		print_msg("Function Test>> setBrain, getBrain");
		dog->setBrain("Yummy1");
		dog->setBrain("Yummy2");
		dog->setBrain("Yummy3");
		for (int i = 0; i < 3; i++)
		{
			std::cout << "dog->getBrain(" << i << "): " << dog->getBrain(i) << std::endl;
		}

		print_msg("Incorrect Index Test");
		std::cout << "dog->getBrain(" << 6 << "): " << dog->getBrain(6) << std::endl;

		const Dog*	copy_;
		print_msg("copy constructor test");
		copy_ = new Dog(*dog);

		//to test deep copy
		print_msg("call function by dog->clearBrain()");
		dog->clearBrain();

		print_msg("copyObj function test>> getBrain");
		for (int i = 0; i < 3; i++)
		{
			std::cout << "copy_->getBrain(" << i << "): " << copy_->getBrain(i) << std::endl;
		}

		print_msg("destructor test");
		delete dog;
		delete copy_;
	}

	{
		print_msg("Deep copy Test(Cat class)");
		const Cat*	cat;

		print_msg("constructor Test");
		cat = new Cat();

		print_msg("Function Test>> setBrain, getBrain");
		cat->setBrain("Yummy1");
		cat->setBrain("Yummy2");
		cat->setBrain("Yummy3");
		for (int i = 0; i < 3; i++)
		{
			std::cout << "cat->getBrain(" << i << "): " << cat->getBrain(i) << std::endl;
		}

		print_msg("Incorrect Index Test");
		std::cout << "cat->getBrain(" << 6 << "): " << cat->getBrain(6) << std::endl;

		const Cat*	copy_;
		print_msg("copy constructor test");
		copy_ = new Cat(*cat);

		//to test deep copy
		print_msg("call function by cat->clearBrain()");
		cat->clearBrain();

		print_msg("copy_Obj function test>> getBrain");
		for (int i = 0; i < 3; i++)
		{
			std::cout << "copy_->getBrain(" << i << "): " << copy_->getBrain(i) << std::endl;
		}

		print_msg("destructor test");
		delete cat;
		delete copy_;
	}
	return (0);
}
