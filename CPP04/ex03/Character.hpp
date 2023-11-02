/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:10:14 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/02 18:04:50 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private :
		AMateria * slot[4];
		std::string name;
	public :
		Character();
		Character(Character const & other);
		~Character();
};

#endif