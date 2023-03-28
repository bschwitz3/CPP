/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:14:50 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 10:26:44 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "New Animal created." << std::endl;
	this->_type = "animal";
}

Animal::~Animal(void)
{
	if (this->_type != "")
		std::cout << "Animal that is a "<< this->_type << " destroyed." << std::endl;
	else
		std::cout << "Animal destroyed." << std::endl;
}

Animal::Animal(Animal & ref)
{
	this->_type = ref._type;
	std::cout << "New Animal created from a copy\n";
}

Animal & Animal::operator=(Animal const & ref)
{
	this->_type = ref._type;
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

