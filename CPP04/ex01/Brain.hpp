/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:35:55 by romvan-d          #+#    #+#             */
/*   Updated: 2024/07/18 15:23:36 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public :
	
		Brain();
		Brain(Brain const & other);
		~Brain();

		Brain & operator=(Brain const & rhs);
		std::string getIdea(int index) const;
		void		setIdea(int index, std::string idea);
		
	private :
	
		std::string ideas[100];
};

#endif