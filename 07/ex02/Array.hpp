/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:45:23 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/11 09:30:28 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>

class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array(): _size(0)
		{
			std::cout << "New empty Array created." << std::endl;
			this->_array = new T[this->_size];
		}
		Array(unsigned int n): _size(n)
		{
			std::cout << "New Array with a size of " << n << std::endl;
			this->_array = new T[this->_size];
		}
		Array(const Array &ref): _size(ref.size())
		{
			std::cout << "New Array from another Array with a size of " << this->_size << std::endl;
			this->_array = NULL;
			*this = ref;
		}
		Array	&operator=(const Array &ref)
		{
			if (this->_array != NULL)
				delete [] this->_array;
			if (ref.size() != 0)
			{
				this->_size = ref.size();
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = ref._array[i];
			}
			return *this;
		}
		~Array()
		{
			std::cout << "Array destroyed." << std::endl;
			if (this->_array)
				delete [] this->_array;
		}

		T	&operator[](unsigned int index)
		{
			if (index >= this->_size || this->_array == NULL)
				throw InvalidIndexException();
			return this->_array[index];
		}

		class InvalidIndexException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		unsigned int	size() const
		{
			return (this->_size);
		}
};

template<typename T>

const char	*Array<T>::InvalidIndexException::what() const throw()
{
	return ("Invalid index.");
}




#endif