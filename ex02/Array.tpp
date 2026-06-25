/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 15:55:25 by sizgi             #+#    #+#             */
/*   Updated: 2026/05/27 14:34:02 by sizgi            ###   ########.fr       */
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
Array<T>::Array(int givenNumber): sizeArray(givenNumber) {
	if(givenNumber < 0)
		throw(std::out_of_range("given array_size is smaller than 0"));
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
		for(int i = 0; i < copyThis.sizeArray; i++)
			this->ptrArray[i] = copyThis.ptrArray[i];
	}
	this->sizeArray = copyThis.sizeArray;
	return *this;
}

template<typename T>
T &Array<T>::operator[](int givenIndex) {
	if(givenIndex >= sizeArray || givenIndex < 0 ) {//if((static_cast<long>(givenIndex) >= static_cast<long>(sizeArray)) || static_cast<long>(givenIndex) < 0 )
		throw std::out_of_range("something went wrong while trying to reach the designated memory!");
	}
		return ptrArray[givenIndex];
}

template<typename T>
int Array<T>::size() const {
	return sizeArray;
}
