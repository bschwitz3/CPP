/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:38 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/26 13:30:51 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat b1("Paul", 34);
		Bureaucrat b2("Mark", 150);
		Bureaucrat b3("Jo", 36);

		std::cout << std::endl;

		b1.decrementGrade(100);
		b2.incrementGrade(149);
		b3.decrementGrade(6);

		std::cout << std::endl;

		std::cout << b1 << b2 << b3;

		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	
	return (0);
}