/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 22:41:13 by rom1              #+#    #+#             */
/*   Updated: 2025/02/16 23:22:50 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdexcept>

PresidentialPardonForm::PresidentialPardonForm() : AForm( "PresidentialPardon", 25, 5 ), target("Default")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm( "PresidentialPardon", 25, 5 ), target(target)
{
	
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) : AForm( "PresidentialPardon", 25, 5 ), target(other.target)
{
	
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & other)
{
	
	(void)other;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned()) {
		throw AForm::FormNotSignedException();
	} else if (executor.getGrade() > this->getExecuteGradeRequirement()) {
		throw AForm::GradeTooLowException();
	}

	std::cout << this->target << " has been pardoned by Zaphod Beeblebox." << std::endl;
}