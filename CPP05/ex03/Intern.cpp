/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 23:29:13 by rom1              #+#    #+#             */
/*   Updated: 2025/02/16 23:32:13 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( const Intern &other )
{
	(void) other;
	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern &Intern::operator=( const Intern &other )
{
	(void)other;
	return (*this);
}

AForm	*Intern::makeForm( std::string name, std::string target )
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	res = -1;

	for (int i = 0; i < 3; i++) {
		if (forms[i] == name) {
			res = i;
		}
	}

	switch (res) {
		case 0:
			return (new ShrubberyCreationForm(target));
			break ;
		case 1:
			return (new RobotomyRequestForm(target));
			break ;
		case 2:
			return (new PresidentialPardonForm(target));
			break ;
		default:
			throw Intern::InvalidFormNameException();
	}
}

const char* Intern::InvalidFormNameException::what() const throw() {
	return ("Intern::InvalidFormNameException : Form's name is invalid.");
}