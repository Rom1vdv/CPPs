/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:20:22 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/23 18:03:00 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
#define Ice_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :

		Ice(std::string const & type);
		Ice(Ice const & other);
		~Ice();
		Ice & operator=(Ice const & rhs);

		virtual AMateria * clone() const;
		virtual void use(ICharacter & target);
		
};

#endif