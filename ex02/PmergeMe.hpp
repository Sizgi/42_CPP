/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:57:34 by sizgi             #+#    #+#             */
/*   Updated: 2026/05/06 18:16:21 by sizgi            ###   ########.fr       */
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


struct Numberdata {
	int numVal;
	bool groupLeader;
	// Numberdata *pairAdress;
	int pairedNum;
	char groupType;
	int groupCount;

	Numberdata(): numVal(-1), groupLeader(false), pairedNum(-1), groupType('-'), groupCount(0) {}
};

class PmergeMe {
	public:
		PmergeMe();
		~PmergeMe();
		void mergerFunc(std::string givenStr);
	private:
		PmergeMe(const PmergeMe &copyThis);
		PmergeMe &operator=(const PmergeMe &copyThis);
		std::vector<Numberdata> myVector;
		void myRecFunc(size_t counter);
		void myInsertFunc(int counter);
		void myInsertFunc2();
		int groupFinder(int bX);
		int pairFinder(int bX);
		size_t vectorSize;
		size_t myPowerOfTwo;
		size_t nonGroupStart;
		size_t groupSize;
		int alreadyDone;
		void denemeFunc(int pairCount, bool unEven);
		int	InsertPointFinder(int tempG, int upperLimit);
};
