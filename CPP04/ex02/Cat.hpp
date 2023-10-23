/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:02:20 by rom1              #+#    #+#             */
/*   Updated: 2023/10/23 13:47:31 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
	public :
		
		Cat();
		Cat(Cat const & other);
		~Cat();

		Cat & operator=(Cat const & rhs);

		void	makeSound() const;
	
	private :

		Brain *brain;
};