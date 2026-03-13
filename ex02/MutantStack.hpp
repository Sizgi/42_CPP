/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:55:46 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/13 15:37:04 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <algorithm>
#include <iostream>


template<typename T>
class MutantStack: public std::stack<T> {
	public:
		T ptrToBegin;
		T ptrToEnd;
		void iterators()
	private:
};

//stack.top() => last