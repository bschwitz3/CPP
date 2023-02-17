/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:49:02 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/17 13:55:48 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor / Destructor

ClapTrap::ClapTrap(): _name(""), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "New ClapTrap created." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "New Claptrap called " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap : " << this->_name << " destroyed." << std::endl;
}

// Methods

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoint >= 1)
	{
		std::cout << this->_name << " attacks, " << target << " causing " << this->_attackDamage << " points of dammage!" << std::endl;
		this->_energyPoint--;
	}
	else
		std::cout << this->_name << " can't attack, no more energypoint." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoint -= amount;
	std::cout << this->_name << " loses " << amount << " hit points." << std::endl;
	if (this->_hitPoint <= 0)
		std::cout << this->_name << " is now dead." << std::endl;
}


void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint >= 1)
	{
		std::cout << this->_name << " regenerates " << amount << " hit points." << std::endl;
		this->_hitPoint += amount;
		this->_energyPoint--;
	}
	else
		std::cout << this->_name << " can't regenerate, no more energypoint." << std::endl;
}