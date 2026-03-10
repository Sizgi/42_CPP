/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:47:30 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/20 16:47:16 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <typeinfo>

void exFunc(int &parameter) {
	parameter++;
}

void exFunc1(char &parameter) {
	parameter = 'A';
}

void exFunc2(double &parameter) {
	parameter = 3.14;
}

template <typename T, typename F>
void iter(T arrayValue, const size_t arraySize, F givenFunction) {
	for(size_t i = 0; i < arraySize; i++)
		givenFunction(arrayValue[i]);
}