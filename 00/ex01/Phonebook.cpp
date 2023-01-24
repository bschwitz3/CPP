/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:44:56 by bschwitz          #+#    #+#             */
/*   Updated: 2023/01/24 13:50:07 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	std::cout << "New phonebook created !" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Program ended. Bye !" << std::endl;
}

void	Phonebook::add(void)
{
	std::string	str;

	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a first name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_firstname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a last name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_lastname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a nickname: "; 
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_nickname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a phone number: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_phonenumber(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a darkest secret: ";
		if (std::getline(std::cin, str) && str != "")
		{
			this->_contacts[this->_index % 8].set_darkestsecret(str);
			std::cout << "Contact registred." << std::endl;
		}
	}
	this->_index++;
}

void	Phonebook::search(void)
{
	std::string	str;

	if (!search_print(this->_contacts))
	{
		std::cout << std::endl << "Phonebook is empty !" << std::endl;
		return;
	}
	while (!std::cin.eof())
	{
		std::cout << "Select an index : ";
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
					this->_contacts[str[0] - 1 - '0'].get_firstname().size())
				break;
		}
		if (str != "")
			std::cout << "Invalid index !" << std::endl;
	}
	if (!std::cin.eof())
		this->print(this->_contacts[str[0] - 1 - '0']);
}

int	search_print(Contact contacts[8])
{
	char		c;
	int			i;
	std::string	str;

	std::cout << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	c = '0';
	i = 0;
	while (++c <= '8')
	{
		if (contacts[c - 1 - '0'].get_firstname().size() && ++i)
		{
			str = c;
			str = fix_width(str, 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1  - '0'].get_firstname(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_lastname(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_nickname(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			std::cout << "|" << std::endl;
		}
	}
	return (i);
}

std::string	fix_width(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

std::string	add_spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}

void	Phonebook::print(Contact contact)
{
	std::cout << std::endl << "Requesting contact information..." << std::endl;
	if (!contact.get_firstname().size())
	{
		std::cout << "Failed to get information." << std::endl;
		return ;
	}
	std::cout << "First Name: " << contact.get_firstname() << std::endl;
	std::cout << "Last Name: " << contact.get_lastname() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone Number: " << contact.get_phonenumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_darkestsecret() << std::endl;
}

Contact	Phonebook::get_contact(int index)
{
	return (this->_contacts[index % 8]);
}