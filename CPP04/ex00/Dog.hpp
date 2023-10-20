/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:33:31 by rom1              #+#    #+#             */
/*   Updated: 2023/10/20 23:21:36 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
	public :
		
		Dog();
		Dog(Dog const & other);
		~Dog();

		Dog & operator=(Dog const & rhs);

		void	makeSound() const;
};