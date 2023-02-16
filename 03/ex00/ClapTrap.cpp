/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:49:02 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/16 19:40:26 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap : " << this->_name << " destroyed." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Claptrap : " << name << " created." << std::endl;
	this->_name = name;
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoint >= 1)
	{
		std::cout << this->_name << " attacks, " << target << " causing " << this->_hitPoint << " points of dammage!" << std::endl;
		// target takedamage
		this->_energyPoint--;
	}
	else
		std::cout << this->_name << " can't attack, no more energypoint." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoint =- amount;
	std::cout << this->_name << " loses " << amount << " hit points." << std::endl;
	if (this->_hitPoint <= 0)
		this->~ClapTrap;
}


void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint >= 1)
	{
		std::cout << this->_name << " regenerates " << amount << " hit points." << std::endl;
		this->_energyPoint--;
	}
	else
		std::cout << this->_name << " can't regenerate, no more energypoint." << std::endl;
}