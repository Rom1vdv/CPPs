/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:02:20 by rom1              #+#    #+#             */
/*   Updated: 2023/10/20 23:07:12 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
	public :
		
		Cat();
		Cat(Cat const & other);
		~Cat();

		Cat & operator=(Cat const & rhs);

		void	makeSound() const;
};