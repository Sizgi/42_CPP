/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:57:34 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/21 18:40:20 by sizgi            ###   ########.fr       */
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

class PmergeMe {
	public:
		PmergeMe();
		~PmergeMe();
		void mergerFunc(std::string givenStr);
	private:
		PmergeMe(const PmergeMe &copyThis);
		PmergeMe &operator=(const PmergeMe &copyThis);
		std::vector<int> myVector;
		size_t vectorSize;
};
