/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:30:23 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/16 14:29:23 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class	Fixed
{
	private:
		int					_val;
		int const static	_bit;
		
	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(Fixed const &copy);
		~Fixed(void);
		
		Fixed	&operator=(Fixed const &copy);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif