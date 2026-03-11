/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:31:32 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/11 16:02:26 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {

}
Span::~Span() {
	
}

Span::Span(unsigned int givenN) {
	value = givenN;
	memberV.resize(value);
}

Span::Span(const Span &copyThis) {
	value = copyThis.value;
	memberV = copyThis.memberV;
}
Span &Span::operator=(const Span &copyThis) {
	
}
void Span::addNumber(int givenNumber) {
	
}

int shortestSpan() {
		for(std::vector<int>::iterator i = memberV.begin(); i != expArray.end(); i++) {
		*i = std::distance(expArray.begin(), i) + 1;
	}
}

int longestSpan() {
	
}

// Next, implement two member functions: shortestSpan() and longestSpan()
// They will respectively find out the shortest span or the longest span (or distance, if
// you prefer) between all the numbers stored, and return it. If there are no numbers stored,
// or only one, no span can be found. Thus, throw an exception.
