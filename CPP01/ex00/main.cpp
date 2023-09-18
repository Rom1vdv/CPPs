/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:30:21 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/18 17:45:42 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie *CreateZombie;

	std::cout << "Heap mode ACTIVATED :" << std::endl;
	CreateZombie = newZombie("Romain la heap");
	CreateZombie->announce();
	
	std::cout << "STACK mode ACTIVATED :" << std::endl;
	randomChump("Garreth la stack de chockbar");

	std::cout << "This deletes the zombie on the heap :" << std::endl;
	delete CreateZombie;
	return (0);
}