/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:08:56 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/07 15:46:17 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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

std::string Contact::GetFirstName(void)
{
	return this->FirstName;
}

std::string Contact::GetLastName(void)
{
	return this->LastName;
}

std::string Contact::GetNickName(void)
{
	return this->NickName;
}

std::string Contact::GetPhoneNumber(void)
{
	return this->PhoneNumber;
}

std::string Contact::GetDarkestSecret(void)
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
