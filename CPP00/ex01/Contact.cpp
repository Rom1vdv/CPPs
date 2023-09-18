/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:08:56 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/14 15:30:25 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructor has been called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor has been called" << std::endl;
	return ;
}

std::string Contact::GetFirstName(void) const
{
	return this->FirstName;
}

std::string Contact::GetLastName(void) const
{
	return this->LastName;
}

std::string Contact::GetNickName(void) const
{
	return this->NickName;
}

std::string Contact::GetPhoneNumber(void) const
{
	return this->PhoneNumber;
}

std::string Contact::GetDarkestSecret(void) const
{
	return this->DarkestSecret;
}

void	Contact::SetFirstName(std::string FirstName)
{
	this->FirstName = FirstName;
}
void	Contact::SetLastName(std::string LastName)
{
	this->LastName = LastName;
}
void	Contact::SetNickName(std::string NickName)
{
	this->NickName = NickName;
}
void	Contact::SetPhoneNumber(std::string PhoneNumber)
{
	this->PhoneNumber = PhoneNumber;
}
void	Contact::SetDarkestSecret(std::string DarkestSecret)
{
	this->DarkestSecret = DarkestSecret;
}
