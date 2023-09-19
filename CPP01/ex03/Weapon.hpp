/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:27:01 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/19 14:53:53 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public :
	
		Weapon(void);
		~Weapon(void);
		
		/* Getters and Setters */
		std::string const&	getType(void) const;
		void			setType(std::string NewType);

	private :
	
		std::string type;
};

#endif