/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:03:45 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/27 14:55:24 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain;
	std::cout << "A cat was constructed, with its new brain\n";
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "A cat was destroyed, his brain deleted\n";
}

Cat::Cat(Cat & ref)
{
	this->_type = ref.getType();
	this->_brain = new Brain(*(ref.getBrain()));
	std::cout << "A cat was constructed from copy, but has a brain on its own\n";
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*(rhs.getBrain()));
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow meow\n";
}

std::string Cat::getType( void ) const
{
	return (this->_type);
}

Brain *Cat::getBrain( void ) const
{
	return (this->_brain);
}

void Cat::compareTo(Cat const & other_cat) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two cats\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->_brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->_brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_cat.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}