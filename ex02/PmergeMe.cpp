/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:57:25 by sizgi             #+#    #+#             */
/*   Updated: 2026/05/06 18:21:04 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	groupSize = 1;
	alreadyDone = 1;
}
PmergeMe::~PmergeMe () {}

PmergeMe::PmergeMe(const PmergeMe &) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &) {
	return *this;
}

static int JacobS(int givenNumber) {
	int jacob = 0;

	jacob =((1 << givenNumber)-static_cast<int>(pow(-1, givenNumber)))/3;
	return (jacob);
}

int PmergeMe::groupFinder(int bX) {
	for(int i = 0; i < (int)myVector.size(); ++i) {
		if(myVector[i].groupLeader && myVector[i].groupType == 'b' && myVector[i].groupCount == bX)
			return i;
	}
	//Error
	return -1;
}

int PmergeMe::pairFinder(int pairedN) {
	for(int i = 0; i < (int)myVector.size(); ++i) {
		if(myVector[i].groupLeader && myVector[i].groupType == 'a' && myVector[i].numVal == pairedN)
			return i;
	}
	//Error
	return -1;
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
		it->groupLeader = false;
		it->pairedNum = -1;
		it->groupType = '-';
		it->groupCount = 0;
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
		myVector[ax].groupLeader = true;
		
		myVector[bx].groupType = 'b';
		myVector[bx].groupCount = i+1;
		myVector[bx].groupLeader = true;
		myVector[bx].pairedNum = myVector[ax].numVal;
		std::cout << "im: " << myVector[bx].numVal << ", my pairVal: " << myVector[bx].pairedNum << std::endl;
		if(unEven && i == pairCount-1) {
			size_t	unEvenBx = (pairCount*groupSize*2)+groupSize-1;
			myVector[unEvenBx].groupType = 'b';
			myVector[unEvenBx].groupCount = i+2;
			myVector[unEvenBx].pairedNum = myVector[ax].numVal;
			myVector[bx].groupLeader = true;
			std::cout << "im: " << myVector[unEvenBx].numVal << ", my pairVal: " << myVector[unEvenBx].pairedNum << std::endl;
		}
	}
	denemeFunc(pairCount, unEven);
	//std::lower_bound or std::upper_bound in STL
}

int PmergeMe::InsertPointFinder(int groupLeader, int upperLimit) {
	int low = 0;
	int high = upperLimit / (groupSize*2);
	
	while(low < high) {
		int mid = (low + high) /2;
		int midLeader = mid * (groupSize*2) + (groupSize-1);
		if(myVector[midLeader].numVal < myVector[groupLeader].numVal)
			low = mid +1;
		else
			high = mid;
	}
	return(low*(groupSize*2));
}
// loop logic and func
void PmergeMe::denemeFunc(int pairCount, bool unEven) {
	int save = 0;
	alreadyDone = 1;
	for(int i = 3; i < INT_MAX; i++) {
		int tempJ = JacobS(i);
		bool getIn = false;
		while(tempJ > pairCount && alreadyDone < pairCount)
			tempJ--;
		save = tempJ;
		while(alreadyDone < tempJ) {
			if(!getIn)
				getIn = true;
			int tempG = groupFinder(tempJ);
			int startG = tempG - (groupSize-1);
			int upperLimit = pairFinder(myVector[tempG].pairedNum);
			int insertPoint = InsertPointFinder(tempG, upperLimit);
			std::rotate(myVector.begin()+(insertPoint), myVector.begin()+startG, myVector.begin()+(tempG+1));
			tempJ--;
		}
		if(getIn)
			alreadyDone = save;
		if(alreadyDone == pairCount)
		{
			if(unEven) {
				int tempG = groupFinder(alreadyDone+1);
				int startG = tempG - (groupSize-1);
				int upperLimit = pairFinder(myVector[tempG].pairedNum);
				int insertPoint = InsertPointFinder(tempG, upperLimit);
				std::rotate(myVector.begin()+(insertPoint), myVector.begin()+startG, myVector.begin()+(tempG+1));
			}
			//print out to see
			for(std::vector<Numberdata>::iterator it = myVector.begin(); it != myVector.end(); it++) {
				std::cout << it->numVal << " ";
			}
			std::cout << std::endl;
			//print out to see
			return;
		}
	}
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
	myInsertFunc(0);
	if(vectorSize > 1 << myPowerOfTwo) {
		std::cout << "power: " << (1 << myPowerOfTwo) << " size: " << vectorSize <<std::endl;
		nonGroupStart = 1 << myPowerOfTwo;
	}
	// main is b1 and the a groups
	// pend b groups exept b1(b is small side of the groups)
	//
}






// 2 11 0 17-9 18 14 19


// rec 3 => 6 15 8 16(b1) - 2 11 0 17(a1) - 9 18 14 19(b2) - 3 10 1 21(a2) - (5 12 4 20)(b3) - 7 13

// main: 6 15 8 16(b1) - 2 11 0 17(a1) - 3 10 1 21(a2) (b1 ve tüm a'lar main)

// pend: 9 18 14 19(b2) - 5 12 4 20(b3) (b1 disindaki tüm b'ler)
// non-participate: 7 13

// insertion;
// b3 from pend -> main
// compare the biggest number vs other big numbers in main 
// main was b1 a1 a2 => now b1 a1 b



// before: [ 1][ 2][ 3][ 4][ 5][ 6][ 7][ 8][ 9][10]
// index:    0   1   2   3   4   5   6   7   8   9


// You want 9 and 10 to move between 4 and 5. So:

// first = index 4 (where you want the group to land)

// middle = index 8 (where the group currently starts)

// last = index 10 (one past the group's end)

// text
// std::rotate(vec.begin()+4, vec.begin()+8, vec.begin()+10)
// Rotate takes everything in [middle, last) and moves it to the front of the range, shifting [first, middle) to the right:


// text
// after:  [ 1][ 2][ 3][ 4][ 9][10][ 5][ 6][ 7][ 8]
// index:    0   1   2   3   4   5   6   7   8   9