/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:57:34 by sizgi             #+#    #+#             */
/*   Updated: 2026/06/09 19:25:16 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include <cmath>
#include <limits.h>
#include <sys/time.h>
#include <iomanip>

#define RED		"\033[31m"
#define WARN	"\033[3;91m"
#define WARN2	"\033[3;92m"
#define WARN3	"\033[3;93m"
#define WARN4	"\033[3;94m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define MAGENT	"\033[35m"
#define CYAN	"\033[36m"
#define GRAY	"\033[90m"
#define BG		"\033[105m"
#define RESET	"\033[0m"
#define BOLD  "\e[1m"

#ifndef VISUAL
#define VISUAL false
#endif

struct Numberdata {
	int numVal;
	int level;
	int id;
	int pairId;
	int groupIndex;
	int groupCount;

	Numberdata(): numVal(-1), level(-1), id(-1), pairId(-1), groupIndex(0), groupCount(0) {}
};

struct PendElements {
	Numberdata data;
	int key; // partnerin cont içindeki index'i, pairsiz ise INT_MAX
};

class PmergeMe {
	public:
		PmergeMe();
		~PmergeMe();
		void mergerVectorFunc();
		void mergerDequeFunc();
		void VectorPrintOutFunc(bool bA, std::string givenStr);
		void DequePrintOutFunc(bool bA, std::string givenStr);
		int getSize() const;
		void getCompCount() const;
		void vecSortChecker(std::vector<Numberdata> &cont);
		void deqSortChecker(std::deque<Numberdata> &cont);
	private:
		PmergeMe(const PmergeMe &copyThis);
		PmergeMe &operator=(const PmergeMe &copyThis);
		std::vector<Numberdata> myVector;
		std::deque<Numberdata> myDeque;
		int vectorSize;
		int myPowerOfTwo;
		int groupSize;
		int compareCount;
		int alreadyDone;
		int JacobS(int givenNumber);
		template <typename Container>
		void myRecFunc(Container &cont, int reLevel) {
			int tempCount = 0;
			for(int i = 0; i< (vectorSize/2) +1; i++) {
				if((i+1 < vectorSize) && cont[i].level < 0 && cont[i+1].level >=0) {
					cont[i].level = reLevel;
					cont[i].pairId = -1; 
					std::rotate(cont.begin()+i, cont.begin()+i+1, cont.end());
				}		
				else if((i+1 < vectorSize) && (cont[i].level < 0)) {
					// std::cout << "[" << cont[i].numVal << ", " << cont[i+1].numVal << "] ";
					if(cont[i].numVal < cont[i+1].numVal) {
						cont[i].level = reLevel;
						cont[i].pairId = cont[i+1].id;
						std::rotate(cont.begin()+i, cont.begin()+i+1, cont.end());
					}
					else {
						cont[i+1].level = reLevel;
						cont[i+1].pairId = cont[i].id;
						std::rotate(cont.begin()+(i+1), cont.begin()+(i+2), cont.end());
					}
					compareCount++;
					tempCount++;
				}
			}
			// std::cout << std::endl;
			// std::cout << RED << tempCount << RESET<< std::endl;
			reLevel++;
			if(reLevel < myPowerOfTwo)
				myRecFunc(cont, reLevel);
			reLevel--;
			myInsertFunc(cont, reLevel);
		}
		template <typename Container>
		void pendSort(Container &cont, int elementCount, int levelS) {
			std::vector<PendElements> pend;
        	pend.reserve(elementCount);
        	for (int count = 0; count < elementCount; ++count) {
        	    PendElements element;
        	    element.data = cont[levelS + count];
			
        	    if (element.data.pairId == -1)// pairsiz elemanlari en sona gönderiyoruz
        	        element.key = INT_MAX;
				else {
        	        element.key = INT_MAX;
        	        for (int j = 0; j < (int)cont.size(); ++j) {// partnerin cont içindeki güncel index'ini buluyoruz
        	            if (cont[j].id == element.data.pairId) {
        	                element.key = j;
        	                break;
        	            }
        	        }
        	    }
        	    pend.push_back(element);
        	}
		
        	for (int i = 1; i < (int)pend.size(); ++i) {// basit insertion sort ile key'e göre sıraliyoruz
        	    PendElements cur = pend[i];
        	    int j = i - 1;
        	    while (j >= 0 && pend[j].key > cur.key) {
        	        pend[j + 1] = pend[j];
        	        --j;
        	    }
        	    pend[j + 1] = cur;
        	}
		
        	for (int i = 0; i < elementCount; ++i) {// Sıralanmış bloğu geri yaziyoruz
        	    cont[levelS + i] = pend[i].data;
        	}
		}
		template <typename Container>
		void myInsertFunc(Container &cont, int reLevel) {
			int save = 0;
			int levelS = levelStart(cont, reLevel); //index where level pend starts
			int elementCount = InsertCount(cont, reLevel);//how many members
			if( elementCount <= 0)
				return;
			pendSort(cont, elementCount, levelS);
			alreadyDone = levelS -1;
			for(int i = 2; i < INT_MAX; i++) {
				int pendings = 0;
				bool getIn = false;
				int numberIndex = levelS-1;
				int tempJ = JacobS(i);
				numberIndex = numberIndex + tempJ;
				while(numberIndex >= levelS+elementCount)
					numberIndex--;
				if(numberIndex <= alreadyDone)
					return;
				pendings = numberIndex - alreadyDone;
				while(pendings > 0)
				{
					if(!getIn) {
						save = numberIndex;
						getIn = true;
					}
					int insertPoint = InsertPointFinder(cont, numberIndex);
					cont[numberIndex].level = -1;
					std::rotate(cont.begin()+(insertPoint), cont.begin()+numberIndex, cont.begin()+(numberIndex+1));
					pendings--;
				}
				if(!getIn)
					return;
				else
					alreadyDone = save;
			}
		}
		template <typename Container>
		int levelStart(Container &cont, int reLevel)  {
			for(int i = 0; i < (int)cont.size(); ++i) {
				if(cont[i].level == reLevel)
					return i;
			}
			//Error
			return -1;
		}
		template <typename Container>
		int InsertCount(Container &cont, int reLevel) {
    		int count = 0;
    		int n = static_cast<int>(cont.size());
				
    		for (int i = 0; i < n; ++i) {
    		    if (cont[i].level == reLevel)
    		        ++count;
    		}
    		return count;
		}
		template <typename Container>
		int	InsertPointFinder(Container &cont, int groupLeader) { //add deque condition 1 for vector 2 for deque?
			int low = 0;
			int high = 0;
			int tempCount = 0;
			if(cont[groupLeader].pairId != -1)
				for(int i = 0; i <(int)cont.size(); i++) {
					if(cont[i].id == cont[groupLeader].pairId) {
						high = i;
						break;
					}
				}
			else {
				for(int i = 0; i < (int)cont.size() && cont[i].level == -1; i++) {
					high++;
				}
			}
		
			while(low < high) {
				int mid = low + (high - low)/2;
				// std::cout <<BLUE<<cont[mid].numVal << ", " << cont[groupLeader].numVal<<RESET <<std::endl; 
				if(cont[mid].numVal < cont[groupLeader].numVal) {
					low = mid +1;
				}
				else
					high = mid;
				tempCount++;
				compareCount++;
			}
			// std::cout <<GREEN<< cont[groupLeader].numVal <<RESET <<std::endl; 
			// std::cout << RED << tempCount << RESET<< std::endl;
			//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
			return low;
		}
};
