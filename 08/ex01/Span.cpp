/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:07:27 by bschwitz          #+#    #+#             */
/*   Updated: 2023/06/19 12:26:25 by bschwitz         ###   ########.fr       */
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
	int res;

	if (this->_v.empty())
		throw SpanIsEmptyException();
	else if (this->_v.size() == 0)
		throw SpanOneException();
	std::vector<int> copy = this->_v;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator start_it = copy.begin();
	res = start_it[1] - start_it[0];
	for(unsigned long i = 0; i + 1 != copy.size(); i++)
	{
		if (copy[i + 1] - copy[i] < res)
			res = copy[i + 1] - copy[i];
	}
	std::cout << "The shortest span is " << res << std::endl;
	return (res);
}

unsigned int	Span::longestSpan() const
{
	int res;

	if (this->_v.empty())
		throw SpanIsEmptyException();
	else if (this->_v.size() == 0)
		throw SpanOneException();
	std::vector<int> copy = this->_v;
	std::sort(copy.begin(), copy.end());
	res = copy.back() - copy.front();
	std::cout << "The longest span is " << res << std::endl;
	return (res);
}




void	Span::printIt()
{
	for (std::vector<int>::iterator it = this->_v.begin(); it != this->_v.end(); ++it)
		std::cout << *it << std::endl;
}
