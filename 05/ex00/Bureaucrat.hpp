/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:50 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/26 11:51:02 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string> 

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);

		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &src);

		std::string	getName() const;
		int			getGrade() const;

		void		incrementGrade(int count);
		void		decrementGrade(int count);

		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat &b);

# endif
