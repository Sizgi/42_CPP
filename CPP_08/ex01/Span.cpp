/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:31:32 by sizgi             #+#    #+#             */
/*   Updated: 2026/06/02 16:48:34 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	memberV.reserve(10);
	srand(time(NULL));
}

Span::~Span() {
}

Span::Span(unsigned int givenN) {
	srand(time(NULL));
	memberV.reserve(givenN);
	n = givenN;
}

Span::Span(const Span &copyThis) {
	srand(time(NULL));
	n = copyThis.n;
	if(!copyThis.memberV.empty()) {
		memberV.reserve(copyThis.memberV.capacity());
		copy(copyThis.memberV.begin(), copyThis.memberV.end(), std::back_inserter(memberV));
	}
}

Span &Span::operator=(const Span &copyThis) {
	if(this != &copyThis) {
		this->n = copyThis.n;
		memberV.clear();
		memberV.reserve(copyThis.memberV.capacity());
		copy(copyThis.memberV.begin(), copyThis.memberV.end(), std::back_inserter(memberV));
	}
	return *this;
}

void Span::addNumber(int givenNumber) {
	if(memberV.size() < n) {
		memberV.push_back(givenNumber);
		std::sort(memberV.begin(), memberV.end());
	}
	else
		throw std::runtime_error("vector is already full, you cant add elements!\n");
}

void Span::addMultipleNumber(unsigned int countOfNumbers) {
	int randomNumber = 0;
	int sign = 0;
	if(countOfNumbers > (memberV.capacity() - memberV.size()))
		throw std::runtime_error("count of numbers is bigger than the space left inside of the container!");
	if(countOfNumbers > 500000)
		throw std::runtime_error("count of numbers is too big, the function takes numbers up to 500.000");
	for(unsigned i = 0; i < countOfNumbers; i++) {
		randomNumber = rand() % INT_MAX;
		sign = rand () % 100;
		if(sign < 51)
			randomNumber = (-1)*randomNumber;
		memberV.push_back(randomNumber);		
	}
	std::sort(memberV.begin(), memberV.end());
}

unsigned int Span::shortestSpan() {
	unsigned int temp = 0;
	if(memberV.empty())
		throw std::runtime_error("Container is empty!");
	if(memberV.size() == 1)
		throw std::runtime_error("Container has only one element!");

	for(std::vector<int>::iterator i = memberV.begin(); i != memberV.end(); ++i) {
		if(i == (memberV.begin() + 1))
			temp = abs(*i - *(i-1));
		if(i > memberV.begin()+1 &&  temp > (unsigned int)abs(*i - *(i-1)))
			temp = abs(*i - *(i-1));
	}
	return temp;
}

unsigned int Span::longestSpan() {
	if(memberV.empty())
		throw std::runtime_error("Container is empty!");
	if(memberV.size() == 1)
		throw std::runtime_error("Container has only one element!");

	std::vector<int>::iterator savedItSmall = std::min_element(memberV.begin(), memberV.end());
	std::vector<int>::iterator savedItBig = std::max_element(memberV.begin(), memberV.end());
   	return((fabs<unsigned int>((*savedItBig - *savedItSmall))));
}

void Span::addFromContainer(std::vector<int>::iterator givenBegin, std::vector<int>::iterator givenEnd) {
	for(std::vector<int>::iterator i = givenBegin; i != givenEnd; ++i) {
		if(memberV.capacity() == memberV.size())
			throw std::runtime_error("Container is already full, you cant add elements!");
		memberV.push_back(*i);	
	}
	std::sort(memberV.begin(), memberV.end());
}
