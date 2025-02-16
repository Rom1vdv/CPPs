/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:05:05 by romvan-d          #+#    #+#             */
/*   Updated: 2025/02/16 22:24:04 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
: name("Default"), signedStatus(false),
signGradeRequired(150), executeGradeRequired(150)
{
	return ;   
}

AForm::AForm(const std::string name, const int signGradeRequired, const int executeGradeRequired)
: name(name), signedStatus(false),
signGradeRequired(signGradeRequired), executeGradeRequired(executeGradeRequired)
{
	if (signGradeRequired < 1 || executeGradeRequired < 1)
	{
		throw AForm::GradeTooHighException();
	}
	if (signGradeRequired > 150 || executeGradeRequired > 150)
	{
		throw AForm::GradeTooLowException();
	}
	return ;
}

AForm::AForm(const AForm & other)
: name(other.name), signedStatus(other.signedStatus),
signGradeRequired(other.signGradeRequired), executeGradeRequired(other.executeGradeRequired)
{

}

AForm & AForm::operator=(AForm const & other)
{
	this->signedStatus = other.signedStatus;
	return *this;
}

AForm::~AForm()
{
	return ;
}

bool	AForm::getSigned() const
{
	return this->signedStatus;
}

std::string AForm::getName() const
{
	return this->name;
}

int	AForm::getSignGradeRequirement() const
{
	return this->signGradeRequired;
}

int	AForm::getExecuteGradeRequirement() const
{
	return this->executeGradeRequired;
}

void	AForm::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGradeRequired)
	{
		throw AForm::GradeTooLowException();
	}
	else if (this->signedStatus == true)
        throw AlreadySignedException();
	this->signedStatus = true;
}


const char * AForm::GradeTooHighException::what () const throw()
{
	return "Grade Too High Exception : grade too high";
}

const char * AForm::GradeTooLowException::what () const throw()
{
	return "Grade Too Low Exception : grade too low";
}

const char * AForm::AlreadySignedException::what() const throw()
{
    return("AForm::AlreadySignedException : AForm is alreay signed.");
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return("AForm::FormNotSignedException : AForm is not signed.");
}

std::ostream & operator<<(std::ostream & input, AForm & rhs)
{
	input << "This AForm named " << rhs.getName() << " signed status is : " << rhs.getSigned()
	<< " has a required grade to sign : " << rhs.getSignGradeRequirement() << " and an executing grade of : "
	<< rhs.getExecuteGradeRequirement() << ".";
	return input;
}