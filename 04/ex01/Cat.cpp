/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:03:45 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 11:36:33 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "A cat created with a brain\n";
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc& e) 
	{
		std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
	}
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destroyed, his brain too\n";
}

Cat::Cat(Cat & ref)
{
	this->_type = ref.getType();
	this->_brain = new Brain(*(ref.getBrain()));
	std::cout << "A cat created from copy, but with a new brain\n";
}

Cat & Cat::operator=(Cat const & ref)
{
	this->_type = ref._type;
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*(ref.getBrain()));
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaoouuuu Miaouuu\n";
}

std::string Cat::getType( void ) const
{
	return (this->_type);
}

Brain *Cat::getBrain(void) const
{
	return (this->_brain);
}

void	Cat::printBrain(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << ((this->_brain)->getIdeas())[i] << " " << i + 1 << std::endl;
}