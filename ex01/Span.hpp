/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:31:32 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/13 12:52:58 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <math.h>
class Span {
	public:
		Span();
		~Span();
		Span(unsigned int givenSize);
		Span(const Span &copyThis);
		Span &operator=(const Span &copyThis);
		void addNumber(int givenNumber);
		void addMultipleNumber(unsigned int givenNumber);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addFromContainer(std::vector<int>::iterator givenBegin, std::vector<int>::iterator givenEnd);
	private:
		std::vector<int> memberV;
		unsigned int n;
};

// Next, implement two member functions: shortestSpan() and longestSpan()
// They will respectively find out the shortest span or the longest span (or distance, if
// you prefer) between all the numbers stored, and return it. If there are no numbers stored,
// or only one, no span can be found. Thus, throw an exception.
