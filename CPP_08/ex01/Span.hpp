/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:31:32 by sizgi             #+#    #+#             */
/*   Updated: 2026/06/02 16:50:27 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <math.h>
#include <limits.h>


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

