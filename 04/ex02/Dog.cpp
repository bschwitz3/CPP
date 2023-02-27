/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:09:25 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/27 11:52:11 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "New Dog created." << std::endl;
	this->_type = "Dog";
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc& e) 
	{
		std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
	}
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destroyed." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woouuff Woouufff !!" << std::endl;
}