/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 15:55:25 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/24 14:37:08 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(): sizeArray(0) {
	ptrArray = new T[sizeArray]();
}

template<typename T>
Array<T>::~Array() {
	delete[] this->ptrArray;
}

template<typename T>
Array<T>::Array(unsigned int givenNumber): sizeArray(givenNumber) {
	ptrArray = new T[sizeArray]();
}

template<typename T>
Array<T>::Array(const Array<T> &copyThis): sizeArray(copyThis.sizeArray) {
	this->ptrArray = NULL;
	*this = copyThis;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &copyThis) {
	if(this != &copyThis) {
		if(this->ptrArray != NULL)
			delete[] this->ptrArray;
		ptrArray = new T[copyThis.sizeArray]();
		// if(copyThis.ptrArray != nullptr) 
		for(unsigned int i = 0; i < copyThis.sizeArray; i++)
			this->ptrArray[i] = copyThis.ptrArray[i];
		}
		this->sizeArray = copyThis.sizeArray;
	return *this;
}

template<typename T>
T &Array<T>::operator[](T givenIndex) {
	if((static_cast<long>(givenIndex) >= static_cast<long>(sizeArray)) || static_cast<long>(givenIndex) < 0 ) {
		throw std::out_of_range("something went while trying to reach the designated memory!\n");
	}
		return ptrArray[givenIndex];
}

template<typename T>
unsigned int Array<T>::size() const {
	return sizeArray;
}

// Develop a class template Array that contains elements of type T and that implements
// the following behavior and functions:
// • Construction with no parameter: Creates an empty array. yes
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