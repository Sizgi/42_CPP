/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:55:46 by sizgi             #+#    #+#             */
/*   Updated: 2026/06/02 16:52:21 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <algorithm>
#include <iostream>


template<typename T>
class MutantStack: public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		
		iterator begin();
		iterator end();
		
		const_iterator begin() const;
		const_iterator end() const;
		
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack<T> &copyThis);
		MutantStack &operator=(const MutantStack<T> &copyThis);

		T &operator[](size_t givenIndex);
		const T &operator[](size_t givenIndex) const;
	private:
};

#include "MutantStack.tpp"
