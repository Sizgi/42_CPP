/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:20:22 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/12 19:00:12 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter(void) {
}

// ScalarConverter::ScalarConverter(const ScalarConverter &copyThis) {
// }

// ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copyThis) {
// 	// if(this != &copyThis) {
// 	// }
// 	return *this;
// }

// void ScalarConverter::setInt(int givenN) {
// 	intValue = givenN;
// }

// int ScalarConverter::getInt() {
// 	return intValue;
// }

ScalarConverter::InputType 	ScalarConverter::pseudoCheck(std::string str) {
	
	// "nan"    Not a Number (double)
// "nanf"   Not a Number (float)
// "+inf"   Positive infinity (double)
// "+inff"  Positive infinity (float)
// "-inf"   Negative infinity (double)
// "-inff"  Negative infinity (float)

	if(str == "nan" || str == "NaN" || str == "+inf" || str == "-inf")
		return PSEUDOD;
	if(str == "nanf" || str == "NaNf" || str == "+inff" || str == "-inff")
		return PSEUDOF;
	// if(str.find_first_not_of("0123456789-+.fe") != std::string::npos)
	// 	std::cout << "PROBLEMMMM!!!\n";
	// return CHAR;
	return TBD;
}

ScalarConverter::InputType 	ScalarConverter::validInputCheck(std::string str) {
	if(str.find_first_not_of("0123456789") != std::string::npos) {
		//validate for number types
	}
	else if(str.size)
	return TBD;
}


void ScalarConverter::convert(std::string str) {

	InputType check;
	check = pseudoCheck(str);
	if(check != TBD)
		//pseudo something!;
	check = validInputCheck(str);
	
	// if(check != TBD)
		//not valid, do something!;
	// check  = 
	// std::istringstream userInput(str);
}
