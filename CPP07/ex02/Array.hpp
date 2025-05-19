/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:48:43 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/08 14:58:52 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template<typename T>
class Array 
{
	private :
		unsigned int size;
		T * array;
	public :

		Array<T>(void) : size(0), array(new T[0])
		{
			return ;
		}

		Array<T>(unsigned int size)
		: size(size), array(new T[size])
		{
			return ;
		}

		Array<T>(Array const & other)
		: size(other.size), array(new T[other.size])
		{
			for (unsigned int i = 0; i < this->size; i++)
			{
				this->array[i] = other.array[i];
			}
			return ;
		}

		~Array<T>(void) 
		{
			delete [] this->array;
			return ;
		}

		Array & operator=(const Array &other)
		{
			delete [] this->array;
			this->array = new T[other.size];
			for (unsigned int i = 0; i < other.size; i++)
			{
				this->array[i] = other.array[i];
			}
			this->size = other.size;
			return (*this);
		}

		T & operator[] (unsigned int index)
		{
			if (index >= this->size)
			{
				throw Array<T>::IndexOutOfBoundsException();
			}
			return (this->array[index]);
		}

		unsigned int getSize( void )
		{
			return (this->size);
		}

		class IndexOutOfBoundsException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Array<T>::IndexOutOfBoundsException] Index is out of bounds.");
				}
		};
};

#endif