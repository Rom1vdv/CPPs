/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:13:48 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/20 12:50:04 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Jesus("Romain");
	ClapTrap God(Jesus);
	ClapTrap Angel;
	
	Jesus.attack("Yann");
	Jesus.setAttackDamage(3);
	Jesus.attack("Yann");
	Jesus.takeDamage(4);
	Jesus.beRepaired(3);
	Jesus.takeDamage(9);
	Jesus.attack("kenzo");
	Jesus.takeDamage(4);

	Angel = God;
	Angel.attack("Yann");
}