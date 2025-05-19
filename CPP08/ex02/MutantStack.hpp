/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:59:26 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/12 14:42:31 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>()
		: std::stack<T>()
		{

		}
		
		MutantStack<T>(MutantStack const & other)
		: std::stack<T>(other)
		{
			
		}

		~MutantStack<T>()
		{

		}
		MutantStack<T> & operator=(MutantStack const & rhs)
		{
			std::stack<T>::operator=(rhs);
			return *this;
		}
		
		typedef typename std::deque<T>::iterator stack_iterator;
		stack_iterator begin()
		{
			return this->c.begin();
		}
		stack_iterator end()
		{
			return this->c.end();
		}
		
};



#endif