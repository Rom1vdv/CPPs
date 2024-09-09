/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:33:31 by rom1              #+#    #+#             */
/*   Updated: 2024/09/09 14:20:19 by romvan-d         ###   ########.fr       */
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
		Brain	*getBrain() const;

	private :

		Brain *brain;
};