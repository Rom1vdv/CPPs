/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:59:45 by rom1              #+#    #+#             */
/*   Updated: 2023/11/20 15:55:31 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & other);
	~DiamondTrap();
	DiamondTrap & operator=(DiamondTrap const & rhs);

	void	whoAmI();
	using ScavTrap::attack;
	
	private :
	
		std::string name;
		
};

#endif