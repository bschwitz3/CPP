/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:03:45 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 10:25:26 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "New Cat created." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed." << std::endl;
}

Cat::Cat(Cat & ref)
{
	this->_type = ref.getType();
	std::cout << "A cat was constructed from copy\n";
}

Cat & Cat::operator=(Cat const & ref)
{
	this->_type = ref._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuu Miaouuu !!" << std::endl;
}

std::string Cat::getType( void ) const
{
	return (this->_type);
}

