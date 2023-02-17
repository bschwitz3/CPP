/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:18:30 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/17 13:40:35 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	Claptrap("tac");
	ScavTrap	Scavtrap("tic");

	Claptrap.attack("cible");
	Scavtrap.takeDamage(0);
	Scavtrap.attack("dinosaure");
	Claptrap.beRepaired(1);

	for (int i = 0; i < 10; i++)
		Claptrap.attack("village");

	Scavtrap.guardGate();
	Scavtrap.beRepaired(3);

	return (0);
}