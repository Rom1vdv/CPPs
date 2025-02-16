/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 23:24:43 by rom1              #+#    #+#             */
/*   Updated: 2025/02/16 23:27:37 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
# define Intern_HPP

# include <string>
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

public:
	Intern( void );
	Intern( const Intern &other );
	~Intern( void );
	Intern &operator=( const Intern &other );

	AForm	*	makeForm(std::string name, std::string target);

	class InvalidFormNameException: public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif