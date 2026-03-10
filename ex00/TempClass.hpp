/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TempClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:30:42 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/18 18:55:53 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <typeinfo>
#include <iostream>


template <typename T>
void swap(T &valueA, T &valueB) {
	T temp = valueA;
	valueA = valueB;
	valueB = temp;
}
template <typename T>
const T &min(const T &valueA, const T &valueB) {
	// if(valueA <= valueB)
	// 	return valueA;
	// return valueB;
	return (valueA < valueB) ? valueA : valueB;
}

template <typename T>
const T &max(const T &valueA, const T &valueB) {
	// if(valueA >= valueB)
	// 	return valueA;
	// return valueB;
	return (valueA > valueB) ? valueA : valueB;
}
