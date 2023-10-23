/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:24:11 by rom1              #+#    #+#             */
/*   Updated: 2023/10/20 23:41:27 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public :
	
		WrongAnimal();
		WrongAnimal(WrongAnimal const & other);
		virtual ~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & rhs);
		virtual void makeSound() const;

	protected :
		
		std::string type;
};

#endif