/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:49:09 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/13 16:50:13 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public :
		Contact ArrayOfContacts[8];
		
		PhoneBook(void);
		~PhoneBook(void);

		/* Methods */
		void	Add(int &i);
		std::string Search(int NumberOfContact);
};

#endif