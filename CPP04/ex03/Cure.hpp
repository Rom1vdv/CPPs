/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:20:13 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/23 18:03:52 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :

		Cure();
		Cure(Cure const & other);
		~Cure();
		Cure & operator=(Cure const & rhs);

		virtual AMateria * clone() const;
		virtual void use(ICharacter & target);
		
};

#endif