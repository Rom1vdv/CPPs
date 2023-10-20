/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:47:19 by rom1              #+#    #+#             */
/*   Updated: 2023/10/20 23:50:40 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :

		WrongCat();
		WrongCat(WrongCat const & other);
		~WrongCat();

		WrongCat & operator=(WrongCat const & rhs);
		void makeSound() const;
};

#endif