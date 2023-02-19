/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:16:43 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/19 10:42:23 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FlagTrap.hpp"

// constructor / destructor

FlagTrap::FlagTrap(void): ClapTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "New FlagTrap created." << std::endl;
}

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "New Flagtrap called " << name << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "Flagtrap : " << this->_name << " destroyed." << std::endl;
}

// methods

void	FlagTrap::highFivesGuys(void)
{
	std::string answer;

	std::cout << "Can " << this->_name << " have a high five? ";
	std::cin >> answer;
	if (answer == "y")
		std::cout << this->_name << " got his high five :)" << std::endl;
	else if (answer == "n")
		std::cout << "Ok, no high five for "<< this->_name << " :(" << std::endl;
	else
	{
		std::cout << "Please answer : 'y' or 'n' !" << std::endl;
		highFivesGuys();
	}
}