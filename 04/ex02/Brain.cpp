/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:10:01 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 11:49:41 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Braiiiin ideaaa";
	std::cout << "A brain created and filled with 100 ideas\n";
}

Brain::~Brain()
{
	delete [] (this->_ideas);
	std::cout << "A brain destroyed\n";
}

Brain::Brain(Brain & ref)
{
	std::string *ref_ideas = ref.getIdeas();
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref_ideas[i] + " copied";
	std::cout << "A brain and his ideas copy created \n";
}

Brain & Brain::operator=(Brain const & ref)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref._ideas[i];
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->_ideas);
}