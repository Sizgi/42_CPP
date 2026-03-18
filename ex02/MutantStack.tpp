/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:55:46 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/18 15:27:24 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"

// typename MutantStack<T>::iterator
// typename MutantStack<T>::const_iterator



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
// void MutantStack<T>::iterators() {
// 	MutantStack<T> temp;
// 	temp.begin()
// }

//stack.top() => last