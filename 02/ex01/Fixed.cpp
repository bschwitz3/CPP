/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:30:26 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/16 14:27:46 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bit = 8;

Fixed::Fixed(void): _val(0)
{
	std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const int num)
{
	std::cout << "Fixed object created with int constructor" << std::endl; 
	this->_val = num << this->_bit;
} 

Fixed::Fixed(const float num)
{
	std::cout << "Fixed object created with float constructor" << std::endl; 
	this->_val = roundf(num * (1 << this->_bit));
} 

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl; 
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_val / (float)(1 << this->_bit));
}

int	Fixed::toInt(void) const
{
	return (this->_val >> this->_bit);
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_val = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits(const int raw)
{
	this->_val = raw;
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}