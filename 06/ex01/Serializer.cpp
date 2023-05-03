/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:10:29 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/03 17:38:05 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// constr / destr / assign
Serializer::Serializer()
{}

Serializer::~Serializer()
{}

Serializer::Serializer(const Serializer &src)
{
	*this = src;
}

Serializer	&Serializer::operator=(const Serializer &src)
{
	if (this == &src) {}
		return *this;
}

// methods
uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}