/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:07:43 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/20 01:54:45 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span	span(2);

	try
	{
		span.addNumber(23);
		span.addNumber(23);
		span.addNumber(23);
		span.addNumber(23);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	span.printIt();

	return 0;
}