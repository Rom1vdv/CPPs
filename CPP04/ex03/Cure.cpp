/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:44:01 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/23 18:28:45 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
: AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const & other)
{
	(void) other;
}

Cure::~Cure()
{
	return ;
}