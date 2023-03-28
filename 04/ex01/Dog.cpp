/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:09:25 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 11:36:35 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog created with a brain\n";
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc& e) 
	{
		std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
	}
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destroyed, his brain too\n";
}

Dog::Dog(Dog & ref)
{
	this->_type = ref.getType();
	this->_brain = new Brain(*(ref.getBrain()));
	std::cout << "A dog created from a dog copy, but with a new brain\n";
}


Dog & Dog::operator=(Dog const & ref)
{
	this->_type = ref._type;
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*(ref.getBrain()));
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woouuuf woouuuf\n";
}

std::string Dog::getType( void ) const
{
	return (this->_type);
}

Brain *Dog::getBrain( void ) const
{
	return (this->_brain);
}

void	Dog::printBrain(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << ((this->_brain)->getIdeas())[i] << " " << i + 1 << std::endl;
}