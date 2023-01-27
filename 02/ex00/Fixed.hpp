/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:50:39 by bschwitz          #+#    #+#             */
/*   Updated: 2023/01/27 16:50:43 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					_val;
		int const static	_bit;
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		~Fixed(void);
		
		Fixed	&operator=(Fixed const &copy);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif