/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:50:58 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/20 17:57:07 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
	protected :
	
		std::string type;

	public :
		
		Animal();
		Animal(Animal const & other);
		~Animal();
		
		Animal & operator=(Animal const & rhs);
		
		virtual void makeSound() const;
};

#endif