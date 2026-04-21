/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:57:25 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/21 18:51:11 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe () {}

PmergeMe::PmergeMe(const PmergeMe &) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &) {
	return *this;
}

void PmergeMe::mergerFunc(std::string givenStr) {
	std::istringstream iss(givenStr);
	int temp;
	while(iss >> temp) {
		myVector.push_back(temp);
	}
	vectorSize = myVector.size();
	for(std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	// size_t groupSize = 0;
	// temp = vectorSize/2;
	size_t powerOfTwo = (size_t)floor(log((double)vectorSize) / log(2.0));
	std::cout << powerOfTwo << std::endl;
	for(size_t i = 0; i < vectorSize; i+=2) {
		std::cout << i << std::endl;
		if((i + 1 < vectorSize) && myVector[i] > myVector[i+1])
			std::vector<int>swap(myVector[i], myVector[i+1]);
	}
	for(std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}