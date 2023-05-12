/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:07:27 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/12 15:24:30 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_v;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &ref);
		Span	&operator=(const Span &src);
		~Span();

		void	addNumber(int number);

		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

		void	fill(void);

		class SpanIsFullException: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Span is full.");
				}
		};

		class SpanIsEmptyException: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Span is empty.");
				}
		};

		class SpanOneException: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Span has only one element.");
				}
		};
		
};