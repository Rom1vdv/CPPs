/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:43:03 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/15 21:57:21 by rom1             ###   ########.fr       */
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

		void	highFivesGuys(void);
		
	private :
		
		std::string 	name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
};

#endif