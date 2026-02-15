/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:20:22 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/15 15:34:58 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::InputType ScalarConverter::type = ScalarConverter::TBD;

ScalarConverter::ScalarConverter() {
	type = TBD;
}

ScalarConverter::~ScalarConverter(void) {
}

ScalarConverter::ScalarConverter(const ScalarConverter &copyThis) {
	*this = copyThis;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copyThis) {
	if(this != &copyThis)
		type = copyThis.type;
	return *this;
}

ScalarConverter::InputType 	ScalarConverter::pseudoCheck(std::string str) {	
// "nan"    Not a Number (double)
// "nanf"   Not a Number (float)
// "+inf"   Positive infinity (double)
// "+inff"  Positive infinity (float)
// "-inf"   Negative infinity (double)
// "-inff"  Negative infinity (float)
	if(str == "nan" || str == "NaN" || str == "+inf" || str == "-inf" || str == "inf")
		return PSEUDOD;
	if(str == "nanf" || str == "NaNf" || str == "+inff" || str == "-inff" || str == "inff")
		return PSEUDOF;
	return TBD;
}

ScalarConverter::InputType 	ScalarConverter::charCheck(std::string str) {
	if(str.length() == 1) {
		if(std::isprint(str[0])) {
			if(isdigit(str[0]))
				return(INT);
			else
				return (CHAR);
		}
		else
			return INVALID;
	}
	if(str.length() == 3) {
		if(str[0] == '\'' && str[2] == '\'') {
			if(std::isprint(str[0]))
				return CHAR;
			else
				return INVALID;
		}
	}
	return TBD;
}

void 	ScalarConverter::charConverter(std::string str) {
	char charMi = 0;
	std::istringstream charData(str);
	charData >> charMi;
	std::cout << "Given Value: Character" << std::endl;
	std::cout << "Char: "<< charMi << std::endl;
	std::cout << "Integer: " << static_cast<int>(charMi) << std::endl;
	std::cout << "Double: " << std::fixed << static_cast<double>(charMi) << std::endl;
	std::cout << "Float: " << std::fixed << static_cast<float>(charMi) <<"f"<< std::endl;
}

void 	ScalarConverter::floatConverter(std::string str) {
	float floatMu = 0;
	std::istringstream floatData(str);
	floatData >> floatMu;
	std::cout << "Given Value: Float" << std::endl;
	if(type == FLOAT) {
		if(floatMu < 0 || floatMu > std::numeric_limits<char>::max() || !(std::isprint(floatMu)))
			std::cout << "Char: Non-Displayable" << std::endl;
		else
			std::cout << "Char: "<<static_cast<char>(floatMu) << std::endl;
		if (floatMu > std::numeric_limits<int>::max() || floatMu < std::numeric_limits<int>::min())
			std::cout << "Integer: impossible" << std::endl;
		else
			std::cout << "Integer: " << static_cast<int>(floatMu) << std::endl;
		std::cout << "Double: " << std::fixed << static_cast<double>(floatMu) << std::endl;
		std::cout << "Float: " << std::fixed << floatMu <<"f"<< std::endl;
	}
	else {
		std::cout << "Char: Non-Displayable" << std::endl;
		std::cout << "Integer: " << static_cast<int>(floatMu) << std::endl;
		std::cout << "Double: " << static_cast<double>(floatMu) << std::endl;
		std::cout << "Float: " << floatMu <<"f"<< std::endl;
	}
}

void 	ScalarConverter::doubleConverter(std::string str) {
	double doubleMi = 0;
	std::istringstream doubleData(str);
	doubleData >> doubleMi;
	std::cout << "Given Value: Double" << std::endl;
	if(type == DOUBLE) {
		if(doubleMi < 0 || doubleMi > std::numeric_limits<char>::max() || !(std::isprint(doubleMi)))
			std::cout << "Char: Non-Displayable" << std::endl;
		else
			std::cout << "Char: "<<static_cast<char>(doubleMi) << std::endl;
		if (doubleMi > std::numeric_limits<int>::max() || doubleMi < std::numeric_limits<int>::min())
			std::cout << "Integer: impossible" << std::endl;
		else
			std::cout << "Integer: " << static_cast<int>(doubleMi) << std::endl;
		std::cout << "Double: " << std::fixed << doubleMi << std::endl;
		std::cout << "Float: " << std::fixed << static_cast<float>(doubleMi) <<"f"<< std::endl;
	}
	else {
		std::cout << "Char: Non-Displayable" << std::endl;
		std::cout << "Integer: " << static_cast<int>(doubleMi) << std::endl;
		std::cout << "Double: " << doubleMi << std::endl;
		std::cout << "Float: " << static_cast<float>(doubleMi) <<"f"<< std::endl;
	}
}

void	ScalarConverter::intConverter(std::string str) {
	int  intMi = 0;
	std::istringstream intData(str);
	intData >> intMi;
	if(!intData.fail() && intData.eof())
	{
		std::cout << "Given Value: Integer" << std::endl;
		if(intMi < 0 || intMi > std::numeric_limits<char>::max() || !(std::isprint(intMi)))
			std::cout << "Char: Non-Displayable" << std::endl;
		else
			std::cout << "Char: "<<static_cast<char>(intMi) << std::endl;
		std::cout << "Integer: " << intMi << std::endl;
		std::cout << "Double: " << static_cast<double>(intMi) << std::endl;
		std::cout << "Float: " << static_cast<float>(intMi) << "f" << std::endl;
	}
	else {
		type = DOUBLE;
		doubleConverter(str);
	}
}

ScalarConverter::InputType 	ScalarConverter::numericalCheck(std::string str) {
	size_t hasE = 0;
	size_t hasDot = 0;
	size_t hasF = 0;
	
	if(str.find_first_not_of("0123456789-+ef.") != std::string::npos)
		return INVALID;
	//form of 333e+12/333e-12 => valid
	hasE = str.find_first_of("+-", 1);
	if(hasE != std::string::npos && str[hasE - 1] != 'e')
		return INVALID;
	hasE = 0;
	for(size_t i = 0; i < str.length(); i++) {
		if(str[i] == 'e')
			hasE++;
		if(str[i] == 'f') {
			if(i != (str.length()-1))
				return INVALID;
			hasF++;
		}
		if(str[i] == '.')
			hasDot++;
		if(hasE > 1 || hasF > 1 || hasDot > 1)
			return INVALID;
	}

	if(hasF > 0)
		return FLOAT;
	if(hasE || hasDot)
		return DOUBLE;
	return INT;
}

ScalarConverter::InputType 	ScalarConverter::typeCheck(std::string str) {
	type = pseudoCheck(str);
	if(type != TBD)
		return type;
	type = charCheck(str);
	if(type != TBD)
		return type;
	return numericalCheck(str);
}

void ScalarConverter::convert(std::string str) {
	type = typeCheck(str);
	if(type == INVALID)
		std::cout << "Invalid value!" << std::endl;
	else if(type == CHAR)
		charConverter(str);
	else if(type == INT)
		intConverter(str);
	else if(type == DOUBLE || type == PSEUDOD)
		doubleConverter(str);
	else if(type == FLOAT || type == PSEUDOF)
		floatConverter(str);
}
	//std::isprint(static_cast<char>(input)
	//std::numeric_limits<double>::infinity()
	//std::numeric_limits<double>quiet_NaN()
	//double d = 3.14;
    // Using static_cast
    //int i = static_cast<int>(d);
