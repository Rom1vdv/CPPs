/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:10:14 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/06 16:37:02 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private :
	
		AMateria *			slot[4];
		std::string const	name;
		
	public :
	
		Character();
		Character(std::string const & name);
		Character(Character const & other);
		~Character();
		
		Character & operator=(Character const & other);
		std::string const & getName() const;
		void		equip(AMateria * materia);
		void		unequip(int index);
		void		use(int index, ICharacter & target);
		
};

#endif