/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:33:39 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/10 13:40:03 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate()
{
	Base *p;

	srand(time(NULL));
	int	i = rand() % 3;
	switch (i)
	{
		case 0:
			p = new A();
			break;
		case 1:
			p = new B();
			break;
		case 2:
			p = new C();
			break;
	}
	std::cout << "New generate case :" << i << std::endl;
	return (p);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Base pointer identify as a A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "Base pointer identify as a B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "Base pointer identify as a C" << std::endl;
}

void	identify(Base &p)
{
	A a;
	B b;
	C c;

	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "Base referenc identify as a A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "Base referenc identify as a B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		c = dynamic_cast<C&>(p);
		std::cout << "Base referenc identify as a C" << std::endl;
	}
	catch(const std::exception& e) {}
}

int main()
{
	Base *p;

	p = generate();
	identify(p);
	identify(*p);

	delete p;
	
	return (0);
}