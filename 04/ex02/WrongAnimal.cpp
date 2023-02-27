/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:12:18 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/23 09:17:41 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// constructor / destructor

WrongAnimal::WrongAnimal(void)
{
	std::cout << "New WrongAnimal created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name): _type(name)
{
	std::cout << "New WrongAnimal that is a " << name << " created." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	if (this->_type != "")
		std::cout << "WrongAnimal that is a "<< this->_type << " destroyed." << std::endl;
	else
		std::cout << "WrongAnimal destroyed." << std::endl;
}

// methods

void	WrongAnimal::makeSound(void)
{
	if (this->_type == "WrongCat")
		std::cout << "Wrong Miaouuu !!" << std::endl;
	else
		std::cout << "This WrongAnimal is not a WrongCat, set his type!" << std::endl;
}