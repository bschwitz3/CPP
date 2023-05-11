/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:35:45 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/11 09:49:13 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 50
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	Array<int> tmp = numbers;
	Array<int> test(tmp);

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i] || numbers[i] != tmp[i] || tmp[i] != test[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
		std::cout << "numbers[" << i << "] = " << numbers[i] << "\t\t" \
		<< "mirror[" << i << "] = " << mirror[i] << "\t\t" \
		<< "tmp[" << i << "] = " << tmp[i] << "\t\t" \
		<< "test[" << i << "] = " << test[i] << "\t\t" << std::endl;
	}

	std::cout << std::endl << "============================================" << std::endl << std::endl;

	try
	{
		int i = 5;
		numbers[i] = 0;
		std::cout << "numbers[" << i << "] = " << numbers[i] << "\t\t" \
		<< "mirror[" << i << "] = " << mirror[i] << "\t\t" \
		<< "tmp[" << i << "] = " << tmp[i] << "\t\t" \
		<< "test[" << i << "] = " << test[i] << "\t\t" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete [] mirror;//
	return 0;
}