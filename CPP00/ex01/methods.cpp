/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methods.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:56:10 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/18 16:29:38 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void	Contact::AddFirstName(std::string message)
{	
	std::string Input;

	std::cout << message << std::endl;
	while(Input.empty())
	{
		if (!std::getline(std::cin, Input))
		{
			std::exit(EXIT_FAILURE);
		}
		if (Input.empty())
		{
			std::cout << "Input cannot be empty, I am sowwy ૮₍ ˶• ༝ •˶ ₎ა" << std::endl;
		}
	}
	this->SetFirstName(Input);
}

void	Contact::AddLastName(std::string message)
{
	std::string Input;

	std::cout << message << std::endl;
	while(Input.empty())
	{
		if (!std::getline(std::cin, Input))
		{
			std::exit(EXIT_FAILURE);
		}
		if (Input.empty())
		{
			std::cout << "Input cannot be empty, I am sowwy ૮₍ ˶• ༝ •˶ ₎ა" << std::endl;
		}
	}
	this->SetLastName(Input);
}
void	Contact::AddNickName(std::string message)
{
	std::string Input;
	
	std::cout << message << std::endl;
	while(Input.empty())
	{
		if (!std::getline(std::cin, Input))
		{
			std::exit(EXIT_FAILURE);
		}
		if (Input.empty())
		{
			std::cout << "Input cannot be empty, I am sowwy ૮₍ ˶• ༝ •˶ ₎ა" << std::endl;
		}
	}
	this->SetNickName(Input);
}
void	Contact::AddPhoneNumber(std::string message)
{
	std::string Input;
	
	std::cout << message << std::endl;
	while(Input.empty())
	{
		if (!std::getline(std::cin, Input))
		{
			std::exit(EXIT_FAILURE);
		}
		if (Input.empty())
		{
			std::cout << "Input cannot be empty, I am sowwy ૮₍ ˶• ༝ •˶ ₎ა" << std::endl;
		}
	}
	this->SetPhoneNumber(Input);
}

void	Contact::AddDarkestSecret(std::string message)
{
	std::string Input;
	
	std::cout << message << std::endl;
	while(Input.empty())
	{
		if (!std::getline(std::cin, Input))
		{
			std::exit(EXIT_FAILURE);
		}
		if (Input.empty())
		{
			std::cout << "Input cannot be empty, I am sowwy ૮₍ ˶• ༝ •˶ ₎ა" << std::endl;
		}
	}
	this->SetDarkestSecret(Input);
}