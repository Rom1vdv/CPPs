/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:59:44 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/23 16:03:25 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public :

		AMateria(std::string const & type);
		AMateria(AMateria const & other);
		~AMateria();
		AMateria & operator=(AMateria const & rhs);
		
		virtual AMateria * clone() const = 0;
		virtual void use(ICharacter & target);
};

#endif