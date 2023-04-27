/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:38 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/27 14:24:45 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat b1("Paul", 1);
		Bureaucrat b2("Mark", 50);
		Bureaucrat b3("Jo", 25);
		ShrubberyCreationForm s("salut");

		std::cout << std::endl;

		s.execute(b1);
		s.beSigned(b1);
		s.execute(b1);

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