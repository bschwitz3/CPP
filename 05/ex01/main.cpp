/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:38 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/27 11:42:04 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat b1("Paul", 1);
		Bureaucrat b2("Mark", 50);
		Bureaucrat b3("Jo", 25);
		Form f1("formulaire", 30, 3);
		Form f2("questionnaire", -3, 14);

		std::cout << std::endl;

		std::cout << f1;
		b2.signForm(f1);
		std::cout << f1;
		b3.signForm(f1);
		std::cout << f1;
		b1.signForm(f1);
		std::cout << f1;

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