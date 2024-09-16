/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:37:16 by rom1              #+#    #+#             */
/*   Updated: 2024/09/16 15:56:06 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main( void )
{
	// Animal			creature; This line just to shows it doesnt work to instantiate
	const Animal	*(animals[4]) = {new Dog(), new Cat(), new Cat(), new Dog()};
	std::cout << std::endl;
	Brain			*brain;

	brain = animals[1]->getBrain();
	if (brain) {
		brain->setIdea( 1, "Meowwwwww." );
		brain->setIdea( 2, "pi = e = 3." );
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

	for (int i = 0; i < 5; ++i) {
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