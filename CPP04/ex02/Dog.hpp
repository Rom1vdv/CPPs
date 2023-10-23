/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:33:31 by rom1              #+#    #+#             */
/*   Updated: 2023/10/23 13:48:02 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :
		
		Dog();
		Dog(Dog const & other);
		~Dog();

		Dog & operator=(Dog const & rhs);

		void	makeSound() const;
		
	private :

		Brain *brain;
};