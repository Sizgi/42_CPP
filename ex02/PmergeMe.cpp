/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:57:25 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/30 16:35:57 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	groupSize = 1;
}
PmergeMe::~PmergeMe () {}

PmergeMe::PmergeMe(const PmergeMe &) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &) {
	return *this;
}


// Label every active group — assign groupName and set pairAdress (or pair value) for each bx

// Build the logical main and pend sequences — you know the index formulas already from your earlier comment

// Insert each pend element into main using binary search, in Jacobsthal order, respecting the upper bound from the paired ax

void PmergeMe::myInsertFunc2()	{
	binary_search(myVector.begin(), myVector.end(), groupSize);
	
}

void PmergeMe::myInsertFunc(int counter) {
	groupSize = 1 << counter;
	size_t pairCount = vectorSize/(groupSize*2);
	
	if(pairCount == 0 || pairCount == 1) {
		std::cout << "groupSize: " << groupSize << ", ";
		std::cout << "pairCount: " << pairCount << std::endl;
		return;
	}
	bool unEven = false;
	
	if(vectorSize%(groupSize*2) >= groupSize)
		unEven = true;
	///printing out to see//
	std::cout << "groupSize: " << groupSize << ", " << "pairCount: " << pairCount << std::endl;
	for(std::vector<Numberdata>::iterator it = myVector.begin(); it != myVector.end(); it++) {
		std::cout << it->numVal << " ";
	}
	std::cout << std::endl;
	///printing out to see//
	

	//where i name the groups
	for(size_t i = 0; i < pairCount; i++) {
		size_t	ax = (i*groupSize*2)+(groupSize*2)-1;
		size_t	bx = (i*groupSize*2)+groupSize-1;

		myVector[ax].groupType = 'a';
		myVector[ax].groupCount = i+1;
		
		myVector[bx].groupType = 'b';
		myVector[bx].groupCount = i+1;
		myVector[bx].pairedNum = myVector[ax].numVal;
		std::cout << "im: " << myVector[bx].numVal << ", my pairVal: " << myVector[bx].pairedNum << std::endl;
		if(unEven && i == pairCount-1) {
			size_t	unEvenBx = (pairCount*groupSize*2)+groupSize-1;
			myVector[unEvenBx].groupType = 'b';
			myVector[unEvenBx].groupCount = i+1;
			myVector[bx].pairedNum = -1;
			std::cout << "im: " << myVector[unEvenBx].numVal << ", my pairVal: " << myVector[unEvenBx].pairedNum << std::endl;
		}
	}


	//std::lower_bound or std::upper_bound in STL
}


// stable identifier is numVal itself. When need to locate ax in the vector during binary search, search for the struct whose numVal matches the stored pair value.
void PmergeMe::myRecFunc(size_t counter) {
	groupSize = 1 << counter;
	std::cout << "groupSize: " << GREEN << groupSize << RESET << " myLevel: " << GREEN << counter << RESET << std::endl;
	for(size_t i = groupSize-1; i+groupSize < vectorSize; i += groupSize*2) {
		if((i+groupSize < vectorSize) && myVector[i].numVal > myVector[i+groupSize].numVal) {
			size_t groupStart = i - groupSize + 1;
			for(size_t s = 0; s < groupSize; s++) {
				std::swap(myVector[groupStart+s], myVector[(groupStart+s)+groupSize]);
			}
		}
	}

	//print out to see
	for(std::vector<Numberdata>::iterator it = myVector.begin(); it != myVector.end(); it++) {
		std::cout << it->numVal << " ";
	}
	std::cout << std::endl;
	//print out to see
	counter++;
	if(counter < myPowerOfTwo)
		myRecFunc(counter);
	
	counter--;
	std::cout << "IM HEERE" << std::endl;
	myInsertFunc(counter);
}

void PmergeMe::mergerFunc(std::string givenStr) {
	std::istringstream iss(givenStr);
	Numberdata temp;
	while(iss >> temp.numVal) {
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

