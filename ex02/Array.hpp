/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 15:55:25 by sizgi             #+#    #+#             */
/*   Updated: 2026/05/27 14:38:24 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array {
	public:
		Array();
		~Array();
		Array(const Array &copyThis);
		Array &operator=(const Array &copyThis);
		Array(int givenNumber);
		T &operator[](int givenIndex);
		int size() const;
	private:
		T *ptrArray;
		int sizeArray;
};

#include "Array.tpp"
