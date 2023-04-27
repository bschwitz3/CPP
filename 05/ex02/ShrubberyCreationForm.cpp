/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:04:10 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/27 13:43:58 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//constructor / destructor
ShrubberyCreatorForm::ShrubberyCreationForm(std::string target):
	AForm("ShrubberyCreatorForm", 145, 137), _target(target)
{
	std::cout << "New ShrubberyCreatorForm created with target : " << _target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src):
	AForm("ShrubberyCreatorForm", 145, 137), _target(src.getTarget())
{
	std::cout << "New copy ShrubberyCreatorForm created with target : " << _target << std::endl;

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &src)
{
	std::cout << "ShrubberyCreationForm assignation operator called";
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreation destroyed named : " << this.getName() << std::endl;
}

//methods
std::string	ShrubberyCreationForm::getTarget(void)const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if ((int)executor.getGrade() > this->getGradeE())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->getSigned() == "NO")
		throw (AForm::FormNotSignedException());
	else
	{
		std::ofstream outfile(this->getTarget().append("_shrubbery").c_str());

		for (int i = 0; i < 5; i++)
		{
			outfile <<
			"         v" << std::endl <<
			"        >X<" << std::endl <<
			"         A" << std::endl <<
			"        d$b" << std::endl <<
			"      .d\\$$b." << std::endl <<
			"    .d$i$$\\$$b." << std::endl <<
			"       d$$@b" << std::endl <<
			"      d\\$$$ib" << std::endl <<
			"    .d$$$\\$$$b" << std::endl <<
			"  .d$$@$$$$\\$$ib." << std::endl <<
			"      d$$i$$b" << std::endl <<
			"     d\\$$$$@$b" << std::endl <<
			"  .d$@$$\\$$$$$@b." << std::endl <<
			".d$$$$i$$$\\$$$$$$b." << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
			std::endl;
		}
		outfile.close();
	}
}