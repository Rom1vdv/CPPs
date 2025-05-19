/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:38:12 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/12 13:47:57 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <sstream>
#include <algorithm>
#include <limits>
#include <climits>
class Span
{
	private:

		unsigned int size;
		std::vector<int> holder;

	public:

		Span();
		Span(unsigned int size);
		~Span();
		Span(const Span & other);

		Span & operator=(const Span & rhs);
		void	addNumber(int value);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void	addMultiple(std::vector<int>::iterator & begin, std::vector<int>::iterator & end);
		
		class NoSpaceLeftException : public std::exception {
            const char* what(void) const throw();
        };

        class NotEnoughValuesException : public std::exception {
            const char* what(void) const throw();
        };
};

#endif