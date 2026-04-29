/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:57:25 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/29 14:33:25 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	myLevel = 0;
	groupSize = 1;
}
PmergeMe::~PmergeMe () {}

PmergeMe::PmergeMe(const PmergeMe &) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &) {
	return *this;
}

// void PmergeMe::myInsertFunc() {
// 	size_t i = 0;
// 	size_t	ax = (i*groupSize*2)+(groupSize*2)-1;
// 	size_t	bx = (i*groupSize*2)+(groupSize)-1;
// }

void PmergeMe::myRecFunc(size_t counter) {
	size_t save = 0;
	groupSize = 1 << counter;
	std::cout << "groupSize: " << GREEN << groupSize << RESET << " myLevel: " << GREEN << myLevel << RESET << std::endl;
	for(size_t i = groupSize-1; i+groupSize < vectorSize; i += groupSize*2) {
		if((i+groupSize < vectorSize) && myVector[i].numVal > myVector[i+groupSize].numVal) {
			size_t groupStart = i - groupSize + 1;
			for(size_t s = 0; s < groupSize; s++) {
				std::swap(myVector[groupStart+s], myVector[(groupStart+s)+groupSize]);
			}
		}
	}
	for(std::vector<Numberdata>::iterator it = myVector.begin(); it != myVector.end(); it++) {
		std::cout << it->numVal << " ";
	}
	std::cout << "save: " << save << std::endl;
	std::cout << std::endl;
	counter++;
	if(counter < myPowerOfTwo)
	{
		myLevel = counter;
		myRecFunc(counter);
	}
	
	counter--;
	std::cout << "IM HEERE" << std::endl;
	// myInsertFunc();
}

void PmergeMe::mergerFunc(std::string givenStr) {
	std::istringstream iss(givenStr);
	Numberdata temp;
	while(iss >> temp.numVal) {
		// temp.pairIndex = NULL;
		// temp.groupName = "empty";
		myVector.push_back(temp);
	}
	vectorSize = myVector.size();
	for(std::vector<Numberdata>::iterator it = myVector.begin(); it != myVector.end(); it++) {
		std::cout << it->numVal << " ";
	}
	std::cout << std::endl;
	myPowerOfTwo = (size_t)floor(log((double)vectorSize) / log(2.0));
	std::cout << myPowerOfTwo << std::endl;
	size_t counter = 0;
	myRecFunc(counter);
	if(vectorSize > 1 << myPowerOfTwo) {
		std::cout << "power: " << (1 << myPowerOfTwo) << " size: " << vectorSize <<std::endl;
		nonGroupStart = 1 << myPowerOfTwo;
	}
	// main is b1 and the a groups
	// pend b groups exept b1(b is small side of the groups)
	//
}


// static size_t JacobS(size_t givenNumber) {
// 	size_t tempVal = 0;

// 	tempVal =((1 << givenNumber)-static_cast<size_t>(pow(-1, givenNumber)))/3;
// 	return (tempVal);
// }




// 2 11 0 17-9 18 14 19


// rec 3 => 6 15 8 16(b1) - 2 11 0 17(a1) - 9 18 14 19(b2) - 3 10 1 21(a2) - (5 12 4 20)(b3) - 7 13

// main: 6 15 8 16(b1) - 2 11 0 17(a1) - 3 10 1 21(a2) (b1 ve tüm a'lar main)

// pend: 9 18 14 19(b2) - 5 12 4 20(b3) (b1 disindaki tüm b'ler)
// non-participate: 7 13

// insertion;
// b3 from pend -> main
// compare the biggest number vs other big numbers in main 
// main was b1 a1 a2 => now b1 a1 b

