/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:57:01 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/28 14:09:37 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade)
: name(name), grade(grade)
{
	try
	{
		
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