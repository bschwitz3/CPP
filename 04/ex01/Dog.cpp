/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:09:25 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/27 15:00:05 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain;
	std::cout << "Dog created with brain\n";
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destroyed, brain too\n";
}

Dog::Dog(Dog & ref)
{
	std::cout << "Creating a copy dog brain\n";
	this->_brain = new Brain(*(ref.getBrain()));
	this->_type = ref.getType();
	std::cout << "A dog wcreated from a dog copy, but whith a new brain \n";
}


Dog & Dog::operator=(Dog const & rhs)
{
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain;
	this->_type = rhs._type;
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

void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->_brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_dog.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->_brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_dog.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}