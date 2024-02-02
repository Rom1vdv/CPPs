/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:57:01 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/28 17:32:58 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade)
: name(name), grade(grade)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & other)
: name(other.name), grade(other.grade)
{
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->grade = rhs.grade;
	return *this;
}

std::string const Bureaucrat::getName() const
{
	return this->name;
}

unsigned int Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::incrementGrade(int value)
{
	
}