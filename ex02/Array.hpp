/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 15:55:25 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/25 15:58:04 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>


// # define	GREEN	"\e[1;32m"
// # define	RESET	"\e[0m"

template<typename T>
class Array {
	public:
		Array();
		~Array();
		Array(const Array &copyThis);
		Array &operator=(const Array &copyThis);
		Array(unsigned int givenNumber);
		T &operator[](T givenIndex);
		unsigned int size() const;
	private:
		T *ptrArray;
		unsigned int sizeArray;
};

#include "Array.tpp"


// Develop a class template Array that contains elements of type T and that implements
// the following behavior and functions:
// • Construction with no parameter: Creates an empty array.
// • Construction with an unsigned int n as a parameter: Creates an array of n elements
// initialized by default.
// Tip: Try to compile int * a = new int(); then display *a.
// • Construction by copy and assignment operator. In both cases, modifying either the
// original array or its copy after copying musn’t affect the other array.
// • You MUST use the operator new[] to allocate memory. Preventive allocation (al-
// locating memory in advance) is forbidden. Your program must never access non-
// allocated memory.
// • Elements can be accessed through the subscript operator: [ ].
// • When accessing an element with the [ ] operator, if its index is out of bounds, an
// std::exception is thrown.
// • A member function size() that returns the number of elements in the array. This
// member function takes no parameters and must not modify the current instance.
// As usual, ensure everything works as expected and turn in a main.cpp file that con-
// tains your tests.