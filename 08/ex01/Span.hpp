/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:06:59 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/12 15:24:57 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

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





#endif