/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:43:03 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/20 15:33:05 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public :

		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & other);
		~FragTrap();
		FragTrap & operator=(FragTrap const & rhs);
		
		void	setHitPoints(unsigned int amount);
		std::string getName() const;
		unsigned int getHitPoints() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;
		void	highFivesGuys(void);
};

#endif