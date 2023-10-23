/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:50:58 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/20 22:50:45 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected :
	
		std::string type;

	public :
		
		Animal();
		Animal(Animal const & other);
		virtual ~Animal();
		
		Animal & operator=(Animal const & rhs);
		
		virtual void makeSound() const;
		std::string getType() const;
};

#endif