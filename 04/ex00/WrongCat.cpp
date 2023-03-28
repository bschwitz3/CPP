/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:12:11 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 10:31:25 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "New WrongCat created." << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroyed." << std::endl;
}

WrongCat::WrongCat(WrongCat & ref)
{
	this->_type = ref.getType();
	std::cout << "A WrongCat created from copy\n";
}

WrongCat & WrongCat::operator=(WrongCat const & ref)
{
	this->_type = ref._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Fake miaouuuu\n";
}