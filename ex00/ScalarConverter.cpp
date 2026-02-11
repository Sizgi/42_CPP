/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:20:22 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/11 15:06:58 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(): charValue('0'), doubleValue(0.0), floatValue(0.0f), intValue(0) {
}

ScalarConverter::~ScalarConverter(void) {
}

ScalarConverter::ScalarConverter(const ScalarConverter &copyThis): 
charValue(copyThis.charValue), doubleValue(copyThis.doubleValue), floatValue(copyThis.floatValue), intValue(copyThis.intValue) {
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copyThis) {
	if(this != &copyThis) {
		charValue = copyThis.charValue;
		doubleValue = copyThis.doubleValue;
		intValue = copyThis.intValue;
		floatValue = copyThis.floatValue;
	}
	return *this;
}

void ScalarConverter::setInt(int givenN) {
	intValue = givenN;
}

int ScalarConverter::getInt() {
	return intValue;
}

void ScalarConverter::convert(std::string &str) {
	// char tempArray[str.length() + 1];
	// strcpy(tempArray, str.c_str());

	const char *temp;
	temp = str.c_str();
	std::cout << temp <<std::endl;
}
