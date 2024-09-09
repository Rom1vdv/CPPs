/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:37:16 by rom1              #+#    #+#             */
/*   Updated: 2024/09/09 14:24:26 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// 	const Animal	*bunchofanimals[4];
// 	const Cat		*gato1 = new Cat();
// 	const Cat		*gato2 = new Cat();
// 	const Dog		*doggo1 = new Dog();
// 	const Dog		*doggo2 = new Dog();

// 	bunchofanimals[0] = gato1;
// 	bunchofanimals[1] = gato2;
// 	bunchofanimals[2] = doggo1;
// 	bunchofanimals[3] = doggo2;

// 	std::cout <<  bunchofanimals[0]->getType() << std::endl;
// 	std::cout <<  bunchofanimals[1]->getType() << std::endl;
// 	std::cout <<  bunchofanimals[2]->getType() << std::endl;
// 	std::cout <<  bunchofanimals[3]->getType() << std::endl;
	
// 	gato1->getBrain()->setIdea(3, "salut");
// 	std::cout << gato1->getBrain()->getIdea(3) << std::endl;

// 	for (int i = 0; i < 4; i++)
// 	{
// 		delete bunchofanimals[i];
// 	}
// 	return 0;
// }

#include <iostream>

int	main( void ) {
	const Animal	*(animals[4]) = {new Dog(), new Cat(), new Cat(), new Dog()};
	std::cout << std::endl;
	Brain			*brain;

	brain = animals[1]->getBrain();
	if (brain) {
		brain->setIdea( 3, "Learn some kung fu." );
	}

	Animal	*copycat = new Cat(*(Cat *)(animals[1]));

	if (brain) {
		brain->setIdea( 0, "Don't get copied." );
	}
	brain = copycat->getBrain();
	if (brain) {
		brain->setIdea(4, "cereals." );
	}
	std::cout << std::endl;

	for (int i = 0; i < 6; ++i) {
		brain = animals[1]->getBrain();
		if (brain) {
			std::cout << i << " original : " << brain->getIdea( i ) << std::endl;
		} else {
			std::cout << "Error, brain not found." << std::endl;
		}
		brain = copycat->getBrain();
		if (brain) {
			std::cout << "      copy : " << brain->getIdea( i ) << std::endl;
		} else {
			std::cout << "Error, brain not found." << std::endl;
		}
	}
	std::cout << std::endl;
	
	for (int i = 0; i < 4; i++) {
		std::cout << "Animal " << i << " is a " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}
	std::cout << std::endl;
	
	for (int i = 0; i < 4; i++) {
		delete animals[i];
	}
	std::cout << std::endl;
	delete copycat;
	return (0);
}