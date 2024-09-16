/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:50:58 by romvan-d          #+#    #+#             */
/*   Updated: 2024/09/16 15:35:13 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

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
		virtual Brain *getBrain() const = 0;
};

#endif