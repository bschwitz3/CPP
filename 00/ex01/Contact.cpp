/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:33:58 by bschwitz          #+#    #+#             */
/*   Updated: 2023/01/23 15:52:04 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{}

Contact::~Contact(void)
{}

void	Contact::set_firstname(std::string str)
{
	this->_firstname = str;
}

void	Contact::set_lastname(std::string str)
{
	this->_lastname = str;
}

void	Contact::set_nickname(std::string str)
{
	this->_nickname = str;
}

void	Contact::set_phonenumber(std::string str)
{
	this->_phonenumber = str;
}

void	Contact::set_darkestsecret(std::string str)
{
	this->_darketsecret = str;
}

std::string	Contact::get_firstname(void) const
{
	return (this->_firstname);
}

std::string	Contact::get_lastname(void) const
{
	return (this->_lastname);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_phonenumber(void) const
{
	return (this->_phonenumber);
}

std::string	Contact::get_darkestsecret(void) const
{
	return (this->_darketsecret);
}