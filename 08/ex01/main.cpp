/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:07:43 by bschwitz          #+#    #+#             */
/*   Updated: 2023/06/19 12:27:00 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span	span(7);

	try
	{
		span.addNumber(24);
		span.addNumber(22);
		span.addNumber(50);
		span.addNumber(30);

		span.shortestSpan();
		span.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	span.printIt();

	return 0;
}