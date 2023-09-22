/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:33:50 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/22 15:54:40 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public :
		/* Constructor and Destructor */
		HumanA(std::string Name, Weapon& WeaponType);
		~HumanA(void);

		/* Setters and Getters */
		void			SetName(std::string Name);
		std::string		GetName(void) const;

		void			SetWeapon(Weapon WeaponType);
		std::string		GetWeapon(void) const;
		
		/* Methods */
		void			attack(void) const;
	private :
		std::string 	Name;
		Weapon			&WeaponType;
	
};

#endif