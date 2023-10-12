/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:15:04 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/12 17:02:16 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public :

		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap const & other);
		~ClapTrap();

		ClapTrap & operator=(ClapTrap const & rhs);
		/* Member functions */
		
		void	setAttackDamage(unsigned int amount);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	attack(std::string const & target);

	protected :

		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;	
};

#endif