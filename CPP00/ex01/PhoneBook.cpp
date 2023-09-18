/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:12:42 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/18 16:29:42 by romvan-d         ###   ########.fr       */
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

void	PhoneBook::SearchSpecificIndex(int CurrentAmountOfContacts)
{
	std::string Input;
	int	SpecificIndex;
	
	std::cout << "Please enter the index you want extensive informations on  (⊃｡•́‿•̀｡)⊃━✿✿✿✿✿✿ :" << std::endl;
	if (!std::getline(std::cin, Input))
	{
		std::exit(EXIT_FAILURE);
	}
	while (!VerifyIfStringIsOnlyDigit(Input))
	{
		std::cout << "Sorry, the input you entered is not valid, could you enter a valid one ( ・・)つ-●●● :" << std::endl;
		if (!std::getline(std::cin, Input))
		{
			std::exit(EXIT_FAILURE);
		}
	}
	std::istringstream(Input) >> SpecificIndex;
	while (SpecificIndex < 0 || SpecificIndex >= CurrentAmountOfContacts)
	{
		std::cout << "Sorry, the index you entered is not valid, could you enter a valid one ╰( ͡° ͜ʖ ͡° )つ──☆*:・ﾟ:" << std::endl;
		if (!std::getline(std::cin, Input))
		{
			std::exit(EXIT_FAILURE);
		}
		while (!VerifyIfStringIsOnlyDigit(Input))
		{
			std::cout << "Sorry, the input you entered is not valid, could you enter a valid one ( ・・)つ-●●● :" << std::endl;
		if (!std::getline(std::cin, Input))
		{
			std::exit(EXIT_FAILURE);
		}
		}
		std::istringstream(Input) >> SpecificIndex;
	}
	std::cout << this->ArrayOfContacts[SpecificIndex].GetFirstName() << std::endl;
	std::cout << this->ArrayOfContacts[SpecificIndex].GetLastName() << std::endl;
	std::cout << this->ArrayOfContacts[SpecificIndex].GetNickName() << std::endl;
	std::cout << this->ArrayOfContacts[SpecificIndex].GetPhoneNumber() << std::endl;
	std::cout << this->ArrayOfContacts[SpecificIndex].GetDarkestSecret() << std::endl;
	
}

void	PhoneBook::Search(int CurrentAmountOfContacts)
{	
	std::cout << "|     Index|" << " First Na.|" << " Last Nam.|" << " Nick Nam.|" << std::endl;
	std::cout << "----------" << "----------" << "----------" << "---------------" << std::endl;
	for (int ContactIndex = 0; ContactIndex < CurrentAmountOfContacts; ContactIndex++)
	{
		std::cout << "|" << std::setw(10) << ContactIndex << "|"
		<< std::setw(10)
		<< TruncateStrIfTooLong(this->ArrayOfContacts[ContactIndex].GetFirstName(), 10)
		<< "|" 
		<< std::setw(10)
		<< TruncateStrIfTooLong(this->ArrayOfContacts[ContactIndex].GetLastName(), 10)
		<< "|"
		<< std::setw(10)
		<< TruncateStrIfTooLong(this->ArrayOfContacts[ContactIndex].GetNickName(), 10)
		<< "|"
		<< std::endl;
	}
	this->SearchSpecificIndex(CurrentAmountOfContacts);
}

void PhoneBook::Add(int &ContactIndex)
{
	if (ContactIndex > 7)
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