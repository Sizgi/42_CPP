/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:03:32 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/18 17:42:50 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	ScalarConverter::convert("A");
	std::cout << "1------------------------" << std::endl;
	ScalarConverter::convert("~");
	std::cout << "2------------------------" << std::endl;
	ScalarConverter::convert("0");
	std::cout << "3------------------------" << std::endl;
	ScalarConverter::convert("128");
	std::cout << "4------------------------" << std::endl;
	ScalarConverter::convert("-1");
	std::cout << "5------------------------" << std::endl;
	ScalarConverter::convert("2147483647");
	std::cout << "6------------------------" << std::endl;
	ScalarConverter::convert("2147483648");
	std::cout << "7------------------------" << std::endl;
	ScalarConverter::convert("-2147483648");
	std::cout << "8------------------------" << std::endl;
	ScalarConverter::convert("-2147483649");
	std::cout << "9------------------------" << std::endl;
	ScalarConverter::convert("-2147483649");
	std::cout << "10------HERE-------------" << std::endl;
	ScalarConverter::convert("2222222222222222222222222222222222222f");
	std::cout << "11-----------------------" << std::endl;
	ScalarConverter::convert("22222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222");
	std::cout << "12-----HERE--------------" << std::endl;
	ScalarConverter::convert("333e12");
	std::cout << "13-----------------------" << std::endl;
	ScalarConverter::convert("333e-6");
	std::cout << "14-----------------------" << std::endl;
	ScalarConverter::convert("+333e88");
	std::cout << "15-----------------------" << std::endl;
	ScalarConverter::convert("333e-2f");
	std::cout << "16-----------------------" << std::endl;
	ScalarConverter::convert("inff");
	std::cout << "17-----------------------" << std::endl;
	ScalarConverter::convert("inf");
	std::cout << "18-----------------------" << std::endl;
	ScalarConverter::convert("nan");
	std::cout << "19-----------------------" << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << "20-----------------------" << std::endl;
	ScalarConverter::convert("float");
	std::cout << "21-----------------------" << std::endl;
	ScalarConverter::convert("double");
	std::cout << "22-----------------------" << std::endl;
	ScalarConverter::convert("+inf");
	std::cout << "23-----------------------" << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << "24-----------------------" << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << "25-----------------------" << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << "26-----------------------" << std::endl;
	ScalarConverter::convert("256");
	std::cout << "27------------------------" << std::endl;
	ScalarConverter::convert("NANF");
	std::cout << "20-----------------------" << std::endl;

	return 0;
}
