/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:14:50 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/23 19:05:04 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// constructor / destructor

Animal::Animal(void)
{
	std::cout << "New Animal created." << std::endl;
}

Animal::Animal(std::string name): _type(name)
{
	std::cout << "New Animal that is a " << name << " created." << std::endl;
}

Animal::~Animal(void)
{
	if (this->_type != "")
		std::cout << "Animal that is a "<< this->_type << " destroyed." << std::endl;
	else
		std::cout << "Animal destroyed." << std::endl;
}

// methods

void	Animal::makeSound(void) const
{
	if (this->_type == "Dog")
		std::cout << "Woouuff Woouufff !!" << std::endl;
	else if (this->_type == "Cat")
		std::cout << "Miaouuu Miaouuu !!" << std::endl;
	else
		std::cout << "This Animal is not a Dog or a Cat, set his type!" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}