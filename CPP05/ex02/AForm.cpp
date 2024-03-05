/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:09:27 by romvan-d          #+#    #+#             */
/*   Updated: 2024/03/05 14:28:05 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
:  name("default"), signedStatus(false), executeGradeRequired(150), signGradeRequired(150)
{
	return ;
}

AForm::AForm(const std::string name, const int signGradeRequired, const int executeGradeRequired)
: name(name), signedStatus(false),
signGradeRequired(signGradeRequired), executeGradeRequired(executeGradeRequired)
{
	if (signGradeRequired < 1 | executeGradeRequired < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (signGradeRequired > 150 | executeGradeRequired > 150)
	{
		throw Form::GradeTooLowException();
	}
	return ;
}

AForm::AForm(const Form & other);
name(other.name), signedStatus(other.signedStatus),
signGradeRequired(other.signGradeRequired), executeGradeRequired(other.executeGradeRequired)
{
	if (signGradeRequired < 1 | executeGradeRequired < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (signGradeRequired > 150 | executeGradeRequired > 150)
	{
		throw Form::GradeTooLowException();
	}
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

int AForm::getSignGradeRequirement() const
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
		throw Form::GradeTooLowException();
	}
	this->signedStatus = true;
}