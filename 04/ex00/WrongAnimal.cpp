/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:12:18 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 10:29:40 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(void)
{
	std::cout << "New WrongAnimal created." << std::endl;
	this->_type = "wronganimal";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destroyed." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & ref)
{
	this->_type = ref._type;
	std::cout << "Wrong Animal created from a copy\n";
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & ref)
{
	this->_type = ref._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "this WrongAnimal is not a WrongCat\n";
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}
