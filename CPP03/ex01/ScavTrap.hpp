/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:38:00 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/12 13:57:02 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string Name);
		~ScavTrap();
		ScavTrap(ScavTrap const & other);
		ScavTrap & operator=(ScavTrap const & rhs);
		
		void guardGuate();
		void attack(std::string const & target);
		
	private :
	
		std::string name;
		unsigned int attackDamage;
		unsigned int hitPoints;
		unsigned int energyPoints;
};
