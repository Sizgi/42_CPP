/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 15:01:09 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/09 15:21:28 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &) {}

RPN &RPN::operator=(const RPN &) {
	return *this;
}

void RPN::startFunction(std::string &input) {
	userInput = input;
	size_t tempSize = userInput.size();
	std::string temp;
	std::istringstream iss(userInput);
	iss >> temp;
	while(temp.size() >0) {
	iss >> temp;
	if(temp.size() > 1)
		throw(std::runtime_error("invalid argument type"));
	if(isdigit(temp[0]))
		myStack.push(temp[0]);
	else
		myOperator = temp[0];
	}
	// std::cout << temp << std::endl;
}
//string s = "anani sikeyim orospu cocugu";
//s.erase(std::remove(s.begin(), s.end(), 'a'), s.end());