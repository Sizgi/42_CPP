/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:20:15 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/12 18:09:59 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCCONVERTER_HPP
#define SCALARCCONVERTER_HPP

// #pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <iomanip>

class ScalarConverter {
	public:
		static void convert(std::string str);

	private:
		enum 			InputType
		{
			CHAR,
			DOUBLE,
			FLOAT,
			INT,
			INVALID,
			PSEUDOD,
			PSEUDOF,
			TBD
		};
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &copyThis);
		ScalarConverter &operator=(const ScalarConverter &copyThis);
		static InputType	pseudoCheck(std::string str);
		static InputType	validInputCheck(std::string str);
		InputType type;
	};

// ASCII 32-126 are printable

// "nan"    Not a Number (double)
// "nanf"   Not a Number (float)
// "+inf"   Positive infinity (double)
// "+inff"  Positive infinity (float)
// "-inf"   Negative infinity (double)
// "-inff"  Negative infinity (float)

// "42.0f"   Has decimal point AND ends with 'f' -> yes
// "4.2f"    YES
// "-4.2f"   YES
// "42f"     nope
// "42.0"    NOpe

// "42"       Only digits (and maybe +/- sign)
// "-42"      YES
// "0"        YES
// "42.0"     NO - has decimal

// if (input has format 'X' where X is one char):
//     → It's a CHAR
// else if (input is "nan", "nanf", "+inf", "-inf", etc.):
//     → It's a SPECIAL VALUE
// else if (input ends with 'f'):
//     → It's a FLOAT
// else if (input contains '.'):
//     → It's a DOUBLE
// else:
//     → It's an INT

#endif