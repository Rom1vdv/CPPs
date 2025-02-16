/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 23:17:42 by rom1              #+#    #+#             */
/*   Updated: 2025/02/16 23:22:17 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <stdexcept>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm( "Shrubbery", 145, 137 ), target("Default")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ) : AForm( "Shrubbery", 145, 137 ), target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &other ) : AForm( "Shrubbery", 145, 137 ), target(other.target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other )
{
	(void)other;
	return (*this);
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if (!this->getSigned()) {
		throw AForm::FormNotSignedException();
	} else if (executor.getGrade() > this->getExecuteGradeRequirement()) {
		throw AForm::GradeTooLowException();
	}

	std::string 	filename = this->target + "_shrubbery";
	const char		*fname = filename.c_str();
	std::ofstream	outfile(fname);

	if (!outfile.is_open()) {
		std::cout << "Failed to create " << fname << std::endl;
		return ;
	}
	outfile << "       _-_" << std::endl;
	outfile << "    /~~   ~~\\" << std::endl;
	outfile << " /~~         ~~\\" << std::endl;
	outfile << "{               }" << std::endl;
	outfile << " \\  _-     -_  /" << std::endl;
	outfile << "   ~  \\\\ //  ~" << std::endl;
	outfile << "_- -   | | _- _" << std::endl;
	outfile << "  _ -  | |   -_" << std::endl;
	outfile << "      // \\\\" << std::endl;
	outfile.close();
}