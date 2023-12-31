/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:36:41 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/19 14:20:59 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int AmountOfZombies, std::string Name)
{
	if (AmountOfZombies <= 0)
		return NULL;
	Zombie* ZombieHorde = new Zombie[AmountOfZombies];
	for (int i = 0; i < AmountOfZombies; i++)
	{
		ZombieHorde[i].SetName(Name);
	}
	return ZombieHorde;
}