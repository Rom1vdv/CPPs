/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methods.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:56:10 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/11 17:45:37 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void	Contact::AddFirstName(std::string message)
{
	std::cout << message << std::endl;
	std::getline(std::cin, FirstName);
	this->SetFirstName(FirstName);
}

void	Contact::AddLastName(std::string message)
{
	std::cout << message << std::endl;
	std::getline(std::cin, LastName);
	this->SetLastName(LastName);
}

void	Contact::AddNickName(std::string message)
{
	std::cout << message << std::endl;
	std::getline(std::cin, NickName);
	this->SetNickName(NickName);
}

void	Contact::AddPhoneNumber(std::string message)
{
	std::cout << message << std::endl;
	std::getline(std::cin, PhoneNumber);
	this->SetPhoneNumber(PhoneNumber);
}

void	Contact::AddDarkestSecret(std::string message)
{
	std::cout << message << std::endl;
	std::getline(std::cin, DarkestSecret);
	this->SetDarkestSecret(DarkestSecret);
}