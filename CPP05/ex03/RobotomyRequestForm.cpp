/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 23:11:52 by rom1              #+#    #+#             */
/*   Updated: 2025/02/16 23:22:58 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include <stdexcept>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm( "Robotomy", 72, 45 ), target("Default")
{
	std::srand(std::time(0));
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string target ) : AForm( "Robotomy", 72, 45 ), target(target)
{
	std::srand(std::time(0));
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &other ) : AForm( "Robotomy", 72, 45 ), target(other.target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &other )
{
	(void)other;
	return (*this);
}


void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if (!this->getSigned()) {
		throw AForm::FormNotSignedException();
	} else if (executor.getGrade() > this->getExecuteGradeRequirement()) {
		throw AForm::GradeTooLowException();
	}

	std::cout << "BZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;
	int dice_roll =  std::rand()%2;

	if (dice_roll) {
		std::cout << this->target << " has been robotomized poggiewoggie." << std::endl;
	} else {
		std::cout << "Robotomy on " << this->target << " failed." << std::endl;
	}
}