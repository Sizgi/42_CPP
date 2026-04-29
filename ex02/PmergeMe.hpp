/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:57:34 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/29 14:25:04 by sizgi            ###   ########.fr       */
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
	int *pairIndex;
	std::string groupName;
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
		void myInsertFunc();
		size_t vectorSize;
		size_t myPowerOfTwo;
		size_t myLevel;
		size_t nonGroupStart;
		size_t groupSize;
};
