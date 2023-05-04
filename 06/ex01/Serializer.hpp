/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:51:03 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/04 14:06:02 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct Data
{
	std::string	name;
	int			age;
	bool		member;
} Data;

class Serializer
{
private:
	
public:
	Serializer();
	~Serializer();
	Serializer(const Serializer &src);
	Serializer	&operator=(const Serializer &src);

	uintptr_t	serialize(Data *ptr);
	Data	*deserialize(uintptr_t raw);
};

#endif