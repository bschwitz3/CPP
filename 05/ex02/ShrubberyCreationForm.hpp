/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:04:45 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/27 14:28:52 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class AForm;
class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &src);
		ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();

		std::string	getTarget() const;

		void	execute(Bureaucrat const &executor)const;

};

#endif