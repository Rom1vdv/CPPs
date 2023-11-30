/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:05:23 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/27 16:24:02 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :

		AMateria * knownMaterias[4];
		
	public :
	
		MateriaSource();
		MateriaSource(MateriaSource & other);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const & rhs);
		void learnMateria(AMateria * newMateria);
		AMateria * createMateria(std::string const & type);
};

#endif