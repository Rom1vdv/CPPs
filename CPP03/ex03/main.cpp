/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:11:38 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/20 16:55:24 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap DiamondJoe("Romain");
	DiamondTrap a(DiamondJoe);
	DiamondTrap b = a;
	DiamondTrap c;

	DiamondJoe.whoAmI();
	DiamondJoe.guardGuate();
	DiamondJoe.highFivesGuys();
	DiamondJoe.attack("Jesus");
	
	std::cout << "\n";

	a.whoAmI();
	a.guardGuate();
	a.highFivesGuys();
	a.attack("Jesus");
	
	std::cout << "\n";
	
	b.whoAmI();
	b.guardGuate();
	b.highFivesGuys();
	b.attack("Jesus");
	
	std::cout << "\n";
	
	c.whoAmI();
	c.guardGuate();
	c.highFivesGuys();
	c.attack("Jesus");
	
	std::cout << "\n";
	
	a.whoAmI();
	b.whoAmI();
	a.attack("Romain");
	b.guardGuate();
	b.highFivesGuys();
	c.whoAmI();	
}