/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:03:45 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/27 11:52:03 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "New Cat created." << std::endl;
	this->_type = "Cat";
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc& e) 
	{
		std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
	}
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destroyed." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuu Miaouuu !!" << std::endl;
}