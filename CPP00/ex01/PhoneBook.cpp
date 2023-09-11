/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:12:42 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/11 18:25:26 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook Constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook Destructor called" << std::endl;
}

// std::string PhoneBook::Search(int NumberOfContact)
// {
// 	for (int i = 0; i < NumberOfContact; i++)
// 	{
// 		std::cout << 
// 	}
// }

Contact PhoneBook::Add(int *i)
{
	if (*i > 8)
	{
		*i = 0;
	}
	Contact NewContact = ArrayOfContacts[*i];
	std::cout << *i << std::endl;
	NewContact.AddFirstName("Enter First Name (◎ ◎)ゞ");
	NewContact.AddLastName("Enter Last Name Σ(￣。￣ﾉ)");
	NewContact.AddNickName("Enter Nick Name (￣ω￣)/");
	NewContact.AddPhoneNumber("Enter Phone Number (✧∀✧)/");
	NewContact.AddDarkestSecret("Enter Darkest Secret |ʘ‿ʘ)╯");
	return NewContact;
}