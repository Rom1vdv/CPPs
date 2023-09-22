/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:34:19 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/22 16:00:59 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public :
		
		/* Constructor and Destructor*/
		HumanB(void);
		HumanB(std::string Name);
		~HumanB(void);

		/* Getters and Setters */
		
		void		SetWeapon(Weapon &WeaponType);
		void		SetName(std::string Name);

		std::string const &	GetWeapon(void) const;
		std::string GetName(void) const;

		/* Methods */
		
		void		attack(void) const;
	
	private :
		
		std::string Name;
		Weapon*		WeaponType;
};

#endif