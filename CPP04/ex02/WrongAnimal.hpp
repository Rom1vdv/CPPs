/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:24:11 by rom1              #+#    #+#             */
/*   Updated: 2024/07/18 15:18:09 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public :
	
		WrongAnimal();
		WrongAnimal(WrongAnimal const & other);
		virtual ~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & rhs);
		virtual void makeSound() const;
		std::string getType() const;
		
	protected :
		
		std::string type;
};

#endif