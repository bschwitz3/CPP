/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:30:38 by bschwitz          #+#    #+#             */
/*   Updated: 2023/06/26 10:49:35 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main()
{
	std::stack<int>		stack;
	MutantStack<int>	mstack;

	stack.push(5);
	mstack.push(5);
	stack.push(17);
	mstack.push(17);

	std::cout << "stack top = " << stack.top() << std::endl;
	std::cout << "mstack top = " << mstack.top() << std::endl;
	
	stack.pop();
	mstack.pop();

	std::cout << "stack top = " << stack.top() << std::endl;
	std::cout << "mstack top = " << mstack.top() << std::endl;

	mstack.push(34);
	mstack.push(4);
	mstack.push(353);
	mstack.push(7);


	for (MutantStack<int>::iterator it = mstack.begin(); it < mstack.end(); ++it)
		std::cout << "it = " << *it << std::endl;
	return (0);

}