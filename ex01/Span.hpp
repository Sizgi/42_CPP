/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:31:32 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/11 14:59:17 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <vector>

class Span {
	public:
		Span();
		~Span();
		Span(unsigned int givenSize);
		Span(const Span &copyThis);
		Span &operator=(const Span &copyThis);
		void addNumber(int givenNumber);
		int shortestSpan();
		int longestSpan();
	private:
		int value;
		std::vector<int> memberV;
};

// Next, implement two member functions: shortestSpan() and longestSpan()
// They will respectively find out the shortest span or the longest span (or distance, if
// you prefer) between all the numbers stored, and return it. If there are no numbers stored,
// or only one, no span can be found. Thus, throw an exception.
