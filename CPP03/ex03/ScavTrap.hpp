/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:38:00 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/15 22:17:16 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string Name);
		~ScavTrap();
		ScavTrap(ScavTrap const & other);
		ScavTrap & operator=(ScavTrap const & rhs);
		
		void	guardGuate();
		void	attack(std::string const & target);
		void	setHitPoints(unsigned int amount);
		
	private :
	
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
};
