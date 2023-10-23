/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:50:58 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/23 15:51:55 by romvan-d         ###   ########.fr       */
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
		
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif