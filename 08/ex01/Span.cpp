/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:07:27 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/20 01:59:23 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _size(0)
{
	std::cout << "New Span with a size of 0" << std::endl;
}

Span::Span(unsigned int n): _size(n)
{
	std::cout << "New Span with a max size of " << n << std::endl;
}

Span::Span(const Span &ref)
{
	this->_size = ref.getSize();
	this->_v = ref.getVector();
}

Span	&Span::operator=(const Span &src)
{
	if (this == &src) {}
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor called." << std::endl;
}

unsigned int	Span::getSize() const
{
	return (this->_size);
}

std::vector<int>	Span::getVector() const
{
	return (this->_v);
}

void	Span::addNumber(int number)
{
	if (this->_v.size() >= this->_size)
		throw SpanIsFullException();
	this->_v.push_back(number);
}

unsigned int	Span::shortestSpan() const
{
	
}






void	Span::printIt()
{
	for (std::vector<int>::iterator it = this->_v.begin(); it != this->_v.end(); ++it)
		std::cout << *it << std::endl;
}
