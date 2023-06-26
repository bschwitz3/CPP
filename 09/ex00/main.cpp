/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:32:51 by bschwitz          #+#    #+#             */
/*   Updated: 2023/06/26 19:32:00 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main	(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}
	Bitcoin	btc("data.csv");
	btc.Exchange(av[1]);
 
	return (0);
}