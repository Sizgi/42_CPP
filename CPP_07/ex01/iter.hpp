/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:47:30 by sizgi             #+#    #+#             */
/*   Updated: 2026/05/27 13:59:29 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <typeinfo>

template <typename T, typename F>
void iter(const T *arrayValue, const int arraySize, F givenFunction ) {//void* (givenFunction)(T &)
	if(arraySize < 0)
		throw(std::out_of_range("given array_size is smaller than 0"));
	for(int i = 0; i < arraySize; i++)
		givenFunction(arrayValue[i]);
}

template <typename T, typename F>
void iter(T *arrayValue, const int arraySize, F givenFunction) {
	if(arraySize < 0)
		throw(std::out_of_range("given array_size is smaller than 0"));
	for(int i = 0; i < arraySize; i++)
		givenFunction(arrayValue[i]);
}
