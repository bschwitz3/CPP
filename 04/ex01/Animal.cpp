/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:14:50 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/27 14:46:36 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// constructor / destructor

Animal::Animal(void)
{
	std::cout << "New Animal created." << std::endl;
	this->_type = "animal";

}

Animal::~Animal(void)
{
	std::cout << "Animal destroyed." << std::endl;
}

// methods

Animal::Animal(Animal const & ref)
{
	this->_type = ref._type;
	std::cout << "Animal was constructed from a copy\n";
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	// if (this->_type == "Dog")
	// 	std::cout << "Woouuff Woouufff !!" << std::endl;
	// else if (this->_type == "Cat")
	// 	std::cout << "Miaouuu Miaouuu !!" << std::endl;
	// else
	// 	std::cout << "This Animal is not a Dog or a Cat, set his type!" << std::endl;

	std::cout << "This Animal is not a Dog or a Cat, set his type!" << std::endl;

}

std::string	Animal::getType(void) const
{
	return (this->_type);
}