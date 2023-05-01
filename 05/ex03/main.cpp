/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:38 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/01 18:40:49 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Intern	stagiaire;
		std::cout << std::endl;

		// stagiaire.makeForm("shrubbery", "bender");
		std::cout << std::endl;
		AForm	*form(stagiaire.makeForm("robotomy", "target"));
		std::cout << std::endl;
		stagiaire.makeForm("presidential", "blabla");
		std::cout << std::endl;
		// stagiaire.makeForm("not a form", "test");


		Bureaucrat boss("chef", 2);
		std::cout << std::endl;

		boss.signAForm(*stagiaire.makeForm("shrubbery", "bender"));
		std::cout << std::endl;

		boss.signAForm(*form);
		std::cout << std::endl;

		boss.executeForm(*form);
		std::cout << std::endl;

		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	
	return (0);
}