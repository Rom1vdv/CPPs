/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:39:55 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/18 17:44:31 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* ZombieCrowd = zombieHorde(5, "Romain");
	for (int i = 0; i < 5; i++)
	{
		ZombieCrowd[i].announce();
	}
	delete [] ZombieCrowd;
}