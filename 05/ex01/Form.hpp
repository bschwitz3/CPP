/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:37:49 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/26 13:30:53 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeS;
		int const			_gradeE;

	public:
		Form();
		~Form();
		Form(std::string name, int gradeS, int gradeE);
		Form(Form &src);
		Form	&operator=(Form const &src);

		std::string	getName() const;
		bool		getSigned() const;
		int			getGradeS() const;
		int			getGradeE() const;

		class GradeToHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class GradeToLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		void	beSigned(const Bureaucrat &bureaucrat);
	
};

void			checkGrade(int grade);
std::ostream	&operator<<(std::ostream &o, Form &f);




# endif