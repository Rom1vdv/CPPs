/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:59:45 by rom1              #+#    #+#             */
/*   Updated: 2023/10/15 22:06:04 by rom1             ###   ########.fr       */
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
	DiamondTrap(std::string Name);
	DiamondTrap(DiamondTrap const & other);
	~DiamondTrap();
	DiamondTrap & operator=(DiamondTrap const & rhs);

	void	whoAmI();
	
	private :
	
		std::string name;
};

#endif