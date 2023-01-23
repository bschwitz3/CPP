/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:13:51 by bschwitz          #+#    #+#             */
/*   Updated: 2023/01/23 11:49:19 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int i(1), j;
	
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (ac > 1 && av[i])
	{
		j = 0;
		while (av[i][j])
		{
			std::cout << (char)std::toupper(av[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}