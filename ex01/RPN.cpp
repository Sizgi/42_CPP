/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 15:01:09 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/04 16:11:56 by sizgi            ###   ########.fr       */
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
	
	input.erase(' ');
	std::cout << input << std::endl;
}
