/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:55:46 by sizgi             #+#    #+#             */
/*   Updated: 2026/06/02 16:53:23 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"


template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copyThis) {
	this = copyThis;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &copyThis) {
	if(this != &copyThis)
		std::stack<T>::operator=(copyThis);
	return(*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const{
	return this->c.end();
}

template<typename T>
T &MutantStack<T>::operator[](size_t givenIndex) {
	if(givenIndex < 0 || givenIndex >= this->c.size())
		throw std::runtime_error("Index is out of range!");
	return this->c[givenIndex];
}

template<typename T>
const T &MutantStack<T>::operator[](size_t givenIndex) const {
	if(givenIndex < 0 || givenIndex >= this->c.size())
		throw std::runtime_error("Index is out of range!");
	return this->c[givenIndex];
}

