/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:39:55 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/19 14:25:05 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int AmountOfZombies;

	AmountOfZombies = 5;
	Zombie* ZombieCrowd = zombieHorde(AmountOfZombies, "Romain");
	if (ZombieCrowd == NULL)
		return (1);
	for (int i = 0; i < AmountOfZombies; i++)
	{
		ZombieCrowd[i].announce();
	}
	delete [] ZombieCrowd;
	return (0);
}