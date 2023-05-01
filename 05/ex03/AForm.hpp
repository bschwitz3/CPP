/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:37:49 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/01 11:05:31 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeS;
		int const			_gradeE;

	public:
		AForm();
		~AForm();
		AForm(std::string name, int gradeS, int gradeE);
		AForm(AForm &src);
		AForm	&operator=(AForm const &src);

		std::string	getName() const;
		bool		getSigned() const;
		std::string	printGetSigned() const;
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
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		
		void	beSigned(const Bureaucrat &bureaucrat);

		virtual void execute(Bureaucrat const &executor)const = 0;


};

void			checkGrade(int grade);
std::ostream	&operator<<(std::ostream &o, AForm &f);




# endif