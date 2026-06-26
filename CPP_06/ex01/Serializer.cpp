/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 17:19:16 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/17 16:20:00 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}
Serializer::~Serializer() {}
Serializer::Serializer(const Serializer &) {}
Serializer &Serializer::operator=(const Serializer &) {
	return *this;
}
uintptr_t Serializer::serialize(Data* ptr) {//It takes a pointer and converts it to the unsigned integer type uintptr_t.
	return reinterpret_cast<uintptr_t>(ptr);
}
Data* Serializer::deserialize(uintptr_t raw) {//It takes an unsigned integer parameter and converts it to a pointer to Data.
	return(reinterpret_cast<Data*>(raw));
}
