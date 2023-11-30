/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:13:48 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/20 17:03:20 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Jesus("Romain");
	ScavTrap a = Jesus;
	ScavTrap b(Jesus);
	
	Jesus.attack("God");
	Jesus.guardGuate();
	Jesus.takeDamage(4);
	Jesus.beRepaired(5);
	
	std::cout << "\n";

	a.attack("Romain");
	a.guardGuate();
	
	std::cout << "\n";

	b.attack("gilbert");
	std::cout << b.getName() << std::endl;

	std::cout << "\n";
	std::cout << "When ScavTrap is dead" << std::endl;
	Jesus.setHitPoints(0);
	Jesus.attack("Kenzo");
	Jesus.guardGuate();
	
	return 0;
}