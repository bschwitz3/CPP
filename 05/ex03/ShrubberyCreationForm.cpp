/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:04:10 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/01 11:28:59 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//constructor / destructor
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Default Shrub", 145, 137)
{
	this->_target = "default";
	std::cout << "Shrubberry creation created as default, sign: 145, exec: 137." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrub", 145, 137)
{
	this->_target = target;
	std::cout << "Shrubberry creation created, sign: 145, exec: 137, target: " << target << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src):
	AForm(src.getName(), src.getGradeS(), src.getGradeE())
{
	this->_target = src.getTarget();
	std::cout << "New copy ShrubberyCreatorForm created with target : " << _target << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &src)
{
	this->_target = src.getTarget();
	std::cout << "ShrubberyCreationForm assignation operator called";
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreation destroyed named : " << this->getName() << std::endl;
}

//methods
std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string tree =
	"         v           \n"
	"        >X<          \n"
	"         A           \n"
	"        d$b          \n"
	"      .d\\$$b.       \n"
	"    .d$i$$\\$$b.     \n"
	"       d$$@b         \n"
	"      d\\$$$ib       \n"
	"    .d$$$\\$$$b      \n"
	"  .d$$@$$$$\\$$ib.   \n"
	"      d$$i$$b        \n"
	"     d\\$$$$@$b      \n"
	"  .d$@$$\\$$$$$@b.   \n"
	".d$$$$i$$$\\$$$$$$b. \n"
	"        ###          \n"
	"        ###          \n"
	"        ###          \n";

	if ((int)executor.getGrade() > this->getGradeE())
		throw (Bureaucrat::GradeTooLowException());
	else if (!this->getSigned())
		throw (AForm::FormNotSignedException());
	else
	{
		std::ofstream outfile(this->getTarget() + "_shrubbery");
		if (!outfile.is_open())
		{
			std::cout << "Cannot open the output file" << std::endl;
			return;
		}
		for (int i = 0; i < 5; i++)
			outfile << tree;
		outfile.close();
	}
}