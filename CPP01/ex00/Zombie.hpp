/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:04:29 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/19 15:59:00 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		/* Constructor and Destructor */
		Zombie(void);
		Zombie (std::string Name);
		~Zombie(void);
		
		/* Methods */

		void		announce (void) const;
		void		SetName(std::string);
		std::string	GetName(void) const;
		
	private:
	
		std::string	Name;
};

void	randomChump(std::string Name);
Zombie* newZombie(std::string Name);

#endif