/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:18:30 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/19 10:43:17 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int	main()
{
	ClapTrap	Claptrap("tac");
	ScavTrap	Scavtrap("tic");
	FlagTrap	Flagtrap1("michel");

	Claptrap.attack("cible");
	Scavtrap.takeDamage(10);
	Scavtrap.attack("dinosaure");
	Claptrap.beRepaired(1);

	for (int i = 0; i < 10; i++)
		Claptrap.attack("village");

	Scavtrap.guardGate();
	Scavtrap.beRepaired(3);
	
	Flagtrap1.attack("cible");
	Flagtrap1.highFivesGuys();

	return (0);
}