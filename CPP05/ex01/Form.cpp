/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:05:05 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/06 14:32:29 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
: name("Default"), signedStatus(false),
signGradeRequired(150), executeGradeRequired(150)
{
	return ;   
}

Form::Form(const std::string name, const int signGradeRequired, const int executeGradeRequired)
: name(name), signedStatus(false),
signGradeRequired(signGradeRequired), executeGradeRequired(executeGradeRequired)
{
	if (signGradeRequired < 1 || executeGradeRequired < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (signGradeRequired > 150 || executeGradeRequired > 150)
	{
		throw Form::GradeTooLowException();
	}
	return ;
}

Form::Form(const Form & other)
: name(other.name), signedStatus(other.signedStatus),
signGradeRequired(other.signGradeRequired), executeGradeRequired(other.executeGradeRequired)
{

}

Form & Form::operator=(Form const & other)
{
	this->signedStatus = other.signedStatus;
	return *this;
}

Form::~Form()
{
	return ;
}

bool	Form::getSigned() const
{
	return this->signedStatus;
}

std::string Form::getName() const
{
	return this->name;
}

int	Form::getSignGradeRequirement() const
{
	return this->signGradeRequired;
}

int	Form::getExecuteGradeRequirement() const
{
	return this->executeGradeRequired;
}

void	Form::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGradeRequired)
	{
		throw Form::GradeTooLowException();
	}
	else if (this->signedStatus == true)
        throw AlreadySignedException();
	this->signedStatus = true;
}


const char * Form::GradeTooHighException::what () const throw()
{
	return "Grade Too High Exception : grade too high";
}

const char * Form::GradeTooLowException::what () const throw()
{
	return "Grade Too Low Exception : grade too low";
}

const char * Form::AlreadySignedException::what() const throw()
{
    return("[Form::AlreadySignedException] : Form is alreay signed.");
}

std::ostream & operator<<(std::ostream & input, Form & rhs)
{
	input << "This Form named " << rhs.getName() << " signed status is : " << rhs.getSigned()
	<< " has a required grade to sign : " << rhs.getSignGradeRequirement() << " and an executing grade of : "
	<< rhs.getExecuteGradeRequirement() << ".";
	return input;
}