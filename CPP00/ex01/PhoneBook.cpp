/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:12:42 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/13 18:08:59 by romvan-d         ###   ########.fr       */
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

std::string PhoneBook::Search(int NumberOfContact)
{
	std::cout << "|     Index|" << " First Na.|" << " Last Nam.|" << " Nick Nam.|" << std::endl;
	for (int ContactIndex = 0; ContactIndex < NumberOfContact; ContactIndex++)
	{
		std::cout << "|" << std::setw(10) << ContactIndex << "|"
		<< std::setw(10)
		<< this->ArrayOfContacts[ContactIndex].GetFirstName()
		<< "|" 
		<< std::setw(10)
		<< this->ArrayOfContacts[ContactIndex].GetLastName()
		<< "|"
		<< std::setw(10)
		<< this->ArrayOfContacts[ContactIndex].GetNickName()
		<< "|"
		<< std::endl;
	}
	return "hello";
}

void PhoneBook::Add(int &ContactIndex)
{
	if (ContactIndex > 8)
	{
		ContactIndex = 0;
	}
	Contact &NewContact = this->ArrayOfContacts[ContactIndex];
	NewContact.AddFirstName("Enter First Name (◎ ◎)ゞ");
	NewContact.AddLastName("Enter Last Name Σ(￣。￣ﾉ)");
	NewContact.AddNickName("Enter Nick Name (￣ω￣)/");
	NewContact.AddPhoneNumber("Enter Phone Number (✧∀✧)/");
	NewContact.AddDarkestSecret("Enter Darkest Secret |ʘ‿ʘ)╯");
}