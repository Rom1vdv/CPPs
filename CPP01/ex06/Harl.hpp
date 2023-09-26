/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:55:32 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/26 19:09:13 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	public :
		Harl(void);
		~Harl(void);
		
		void	complain(std::string Level);
	private :
		
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
			
//  The code `typedef void(Harl::*Mod)();` is creating a typedef for a member function pointer in the `Harl` class.
//  The `Mod` type is defined as a pointer to a member function of `Harl` that takes no arguments and returns void.

		typedef void(Harl::*Mod)();
		Mod WhichMod[4];
		
		std::string level;
};

#endif