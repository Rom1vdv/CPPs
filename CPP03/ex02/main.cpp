/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:13:48 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/20 14:52:37 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap Jesus("Romain");

	Jesus.attack("God");
	Jesus.highFivesGuys();

	std::cout << "\n";
	std::cout << "When fragtrap is dead" << std::endl;
	Jesus.setHitPoints(0);
	Jesus.attack("Kenzo");
	Jesus.highFivesGuys();
	
	return 0;
}