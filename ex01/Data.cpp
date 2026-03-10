/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:13:07 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/17 14:22:02 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): number(123) {}
Data::~Data() {}
Data::Data(const Data &copyThis): number(copyThis.number) {}
Data &Data::operator=(const Data &copyThis) {
	if(this != &copyThis)
		this->number = copyThis.number;
	return *this;
}