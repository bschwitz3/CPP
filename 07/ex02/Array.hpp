/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:45:23 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/10 19:22:19 by bschwitz         ###   ########.fr       */
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
			std::cout << "New Array from another Array" << std::endl;
		}
		Array	&operator=(const Array &ref);


		class InvalidIndexException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		}

		unsigned int	size() const
		{
			return (this->_size);
		}
};




#endif