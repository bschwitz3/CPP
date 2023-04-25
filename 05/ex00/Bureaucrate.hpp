/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:50 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/25 17:46:46 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRATE_HPP
# define BUREAUCRATE_HPP

#include <iostream>
#include <string> 

class Bureaucrate
{
	private:
		std::string const	_name;
		int					_grade;
		
		void	setGrade(int grade);

	public:
		Bureaucrate();
		Bureaucrate(std::string name, int grade);
		Bureaucrate(const Bureaucrate &src);

		~Bureaucrate();

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

std::ostream	&operator<<(std::ostream &o, Bureaucrate &b);

# endif
