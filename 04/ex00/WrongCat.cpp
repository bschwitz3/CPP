/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:12:11 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/23 09:20:14 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "New WrongCat created." << std::endl;
}

WrongCat::WrongCat(std::string name)
{
	this->_type = name;
	std::cout << "New WrongCat created." << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroyed." << std::endl;
}