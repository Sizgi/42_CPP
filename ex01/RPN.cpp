/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 15:01:09 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/12 17:28:18 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &) {}

RPN &RPN::operator=(const RPN &) {
	return *this;
}

void RPN::sumFunc(const char myOperator) {
	double temp = 0;
	temp = myStack.top();
	myStack.pop();
	if(myOperator == '+')
		temp = myStack.top() + temp;
	else if(myOperator == '-')
		temp = myStack.top() - temp;
	else if(myOperator == '*')
		temp = myStack.top() * temp;
	else if(myOperator == '/') {
		if(temp == 0)
			throw(std::runtime_error("Division by 0 is not allowed"));
		temp = myStack.top() / temp;
	}
	else
		throw(std::runtime_error("invalid argument type"));
	myStack.pop();
	myStack.push(temp);
}

void RPN::startFunction(const std::string &input) {
	std::string temp;
	std::istringstream iss(input);
	while(iss >> temp) {
		if(temp.size() > 1)
			throw(std::runtime_error("invalid argument type"));
		if(std::isdigit(static_cast<unsigned char>(temp[0])))
			myStack.push(temp[0] -'0');
		else {
			if(myStack.size() < 2)
				throw(std::runtime_error("invalid argument type"));
			sumFunc(temp[0]);
		}
	}
	if(myStack.size() > 1)
		throw(std::runtime_error("invalid argument type"));
	std::cout << myStack.top() << std::endl;
}
