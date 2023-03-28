/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:14:50 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 10:40:04 by bschwitz         ###   ########.fr       */
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
	std::cout << "Animal destroyed." << std::endl;
}

Animal::Animal(Animal const & ref)
{
	this->_type = ref._type;
	std::cout << "Animal was created from a copy\n";
}

Animal & Animal::operator=(Animal const & ref)
{
	this->_type = ref._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "This Animal is not a Dog or a Cat, set his type!" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}