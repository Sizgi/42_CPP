/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:20:15 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/11 15:07:06 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCCONVERTER_HPP
#define SCALARCCONVERTER_HPP

#include <iostream>
#include <cstdlib>

class ScalarConverter {
	public:
		ScalarConverter();
		// ScalarConverter(char *input);
		~ScalarConverter(void);
		ScalarConverter(const ScalarConverter &copyThis);
		ScalarConverter &operator=(const ScalarConverter &copyThis);
		void 	convert(std::string &str);
		void 	setInt(int givenN);
		int		getInt();
	private:
		char charValue;
		double doubleValue;
		float floatValue;
		int intValue;
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