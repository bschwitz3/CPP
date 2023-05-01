/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:38 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/01 13:57:10 by bschwitz         ###   ########.fr       */
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
		Bureaucrat b2("Mark", 146);
		Bureaucrat b3("Luc", 50);

		std::cout << std::endl;

		std::cout << b1 << b2 << b3;

		std::cout << std::endl;
		std::cout << "-----------------------------------------------------------" << std::endl;
		std::cout << std::endl;

		ShrubberyCreationForm s("foret"); // s:145 e:137
		RobotomyRequestForm r("robot"); // s:72 e:45
		PresidentialPardonForm p("president"); // s:25 e:5

		std::cout << std::endl;

		std::cout << s << r << p;
		
		std::cout << std::endl;
		std::cout << "-----------------------------------------------------------" << std::endl;
		std::cout << std::endl;

		// //test1
		// b1.executeForm(p);

		// //test2
		// b1.signAForm(p);
		// b1.executeForm(p);

		// //test3
		// b3.signAForm(p);

		// //test4
		// b3.signAForm(r);
		// b1.signAForm(r);

		// //test5
		// b3.signAForm(s);
		// b1.executeForm(s);

		//ultime test
		b2.incrementGrade(1);
		b2.signAForm(s);
		b3.executeForm(s);
		b1.decrementGrade(10);
		b1.signAForm(p);
		b3.incrementGrade(46);
		b3.executeForm(p);
		b1.signAForm(r);
		b3.executeForm(r);

		std::cout << std::endl;
		std::cout << "-----------------------------------------------------------" << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	
	return (0);
}