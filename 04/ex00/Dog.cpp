/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:09:25 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/27 14:30:04 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "New Dog created." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed." << std::endl;
}

Dog::Dog(Dog & ref)
{
	this->_type = ref.getType();
	std::cout << "A dog was constructed from copy\n";
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woouuff Woouufff !!" << std::endl;
}

std::string Dog::getType( void ) const
{
	return (this->_type);
}

