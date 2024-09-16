/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:59:44 by romvan-d          #+#    #+#             */
/*   Updated: 2024/09/16 16:00:01 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public :

		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & other);
		virtual ~AMateria();
		AMateria & operator=(AMateria const & rhs);
		
		std::string const & getType() const;
		virtual AMateria * clone() const = 0;
		virtual void use(ICharacter & target);
	
	protected :

		std::string const type;
};

#endif
