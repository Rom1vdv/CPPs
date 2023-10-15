/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:08:04 by rom1              #+#    #+#             */
/*   Updated: 2023/10/15 22:18:24 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ScavTrap(), FragTrap(),ClapTrap::name("Default")
{
	std::cout << "[Default] DiamondTrap constructor called" << std::endl;
}