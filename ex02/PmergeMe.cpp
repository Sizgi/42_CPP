/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:57:25 by sizgi             #+#    #+#             */
/*   Updated: 2026/05/20 14:22:07 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	groupSize = 1;
	alreadyDone = 1;
	compareCount = 0;
}
PmergeMe::~PmergeMe () {}

PmergeMe::PmergeMe(const PmergeMe &) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &) {
	return *this;
}

int PmergeMe::getSize() const {
	return vectorSize;
}

void PmergeMe::getCompCount() const {
	// std::cout << GREEN << "Comparisons: " << compareCount << RESET <<std::endl;
	std::cout << "Comparisons: " << compareCount <<std::endl;
}

int PmergeMe::JacobS(int givenNumber) {
	int jacob = 0;
	jacob =((1 << givenNumber)-static_cast<int>(pow(-1, givenNumber)))/3;
	return (jacob);
}

void PmergeMe::VectorPrintOutFunc(bool bA, std::string givenStr) {
	if(bA) {
		std::istringstream iss(givenStr);
		Numberdata temp;
		while(iss >> temp.numVal) {
			temp.id = myVector.size(); //id added
			myVector.push_back(temp);
		}
		vectorSize = myVector.size();
		std::cout << BOLD << RED << "Before: " << RESET;
	}
	else {
		std::cout << BOLD << GREEN << "After: " << RESET;
		vecSortChecker(myVector);
	}
	for(std::vector<Numberdata>::iterator it = myVector.begin(); it != myVector.end(); it++) {
		std::cout << it->numVal << " ";
	}
	std::cout <<"\n"<< std::endl;
}

void PmergeMe::mergerVectorFunc() {
	myPowerOfTwo = (int)floor(log((double)vectorSize) / log(2.0));
	int reLevel = 0;
	myRecFunc(myVector, reLevel);
}

void PmergeMe::DequePrintOutFunc(bool bA, std::string givenStr) {
	if(bA) {
		std::istringstream iss(givenStr);
		Numberdata temp;
		compareCount = 0;
		while(iss >> temp.numVal) {
			temp.id = myDeque.size(); //id added
			myDeque.push_back(temp);
		}
		vectorSize = myDeque.size();
	std::cout << BOLD << RED << "Before: " << RESET;
	}
	else {
		std::cout << BOLD << GREEN << "After: " << RESET;
		deqSortChecker(myDeque);
	}
	
	for(std::deque<Numberdata>::iterator it = myDeque.begin(); it != myDeque.end(); it++) {
		std::cout << it->numVal << " ";
	}
	std::cout <<"\n"<< std::endl;
}

void PmergeMe::mergerDequeFunc() {
	compareCount = 0;
	
	myPowerOfTwo = (int)floor(log((double)vectorSize) / log(2.0));
	int reLevel = 0;
	myRecFunc(myDeque, reLevel);
}

void PmergeMe::vecSortChecker(std::vector<Numberdata> &cont) {
	for(int i = 0; i < (int)cont.size(); i++) {
		if((i+1) < (int)cont.size() && cont[i].numVal > cont[i+1].numVal) {
			std::cout << BOLD << RED << "NOT SORTED!!" << RESET <<std::endl;
			return;
		}
	}
	std::cout << BOLD << GREEN << "PERFECT!!" << RESET <<std::endl;
}

void PmergeMe::deqSortChecker(std::deque<Numberdata> &cont) {
	for(int i = 0; i < (int)cont.size(); i++) {
		if((i+1) < (int)cont.size() && cont[i].numVal > cont[i+1].numVal) {
			std::cout << BOLD << RED << "NOT SORTED!!" << RESET <<std::endl;
			return;
		}
	}
	std::cout << BOLD << GREEN << "PERFECT!!" << RESET <<std::endl;
}

