/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:20:15 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/15 16:53:36 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCCONVERTER_HPP
#define SCALARCCONVERTER_HPP

// #pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <limits>
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
		ScalarConverter 	&operator=(const ScalarConverter &copyThis);
		static InputType	pseudoCheck(std::string str);
		static InputType	charCheck(std::string str);
		static InputType	numericalCheck(std::string str);		
		static InputType 	typeCheck(std::string str);
		static void			floatConverter(std::string str);
		static void			doubleConverter(std::string str);
		static void			intConverter(std::string str);
		static void			charConverter(std::string str);
		static InputType type;
	};

#endif