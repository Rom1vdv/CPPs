/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:24:15 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/19 18:39:22 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>

int	RPN(std::string & values)
{
	std::stack<int>	RPNStack;
	int	topOfStack = 0;

	for (int i = 0; values[i]; i++)
	{
		if (isdigit(values[i]))
			RPNStack.push(values[i] - '0');
		else if (std::isspace(values[i]))
			continue;
		else
		{
			if (RPNStack.size() < 2)
				throw InvalidStackSizeError();
			switch (values[i])
			{
			case ADD:
				topOfStack = RPNStack.top();
				RPNStack.pop();
				RPNStack.top() += topOfStack;
				break;
			case MIN:
				topOfStack = RPNStack.top();
				RPNStack.pop();
				RPNStack.top() -= topOfStack;
				break;
			case PRODUCT:
				topOfStack = RPNStack.top();
				RPNStack.pop();
				RPNStack.top() *= topOfStack;
				break;
			case DIV:
				topOfStack = RPNStack.top();
				if (topOfStack == 0)
					throw DivisionByZeroError();
				RPNStack.pop();
				RPNStack.top() /= topOfStack;
				break;			
			default:
				throw InvalidCharacterError();
			}
		}
	}
	if (RPNStack.size() != 1)
		throw InvalidStackSizeError();
	return RPNStack.top();
}

const char* DivisionByZeroError::what() const throw() {
    return ("Impossible to devide by 0");
}

const char* InvalidStackSizeError::what() const throw() {
    return ("Too many operands on the stack");
}

const char* InvalidCharacterError::what() const throw() {
    return ("Invalid character in input");
};

const char* InvalidOperatorError::what() const throw() {
    return ("[OperatorError] : Unvalid operation");
}