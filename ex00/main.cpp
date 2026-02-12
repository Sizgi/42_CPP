/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:03:32 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/12 18:59:41 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// int main(int argc, char **argv) {
// 	if(argc != 2)
// 	{
// 		std::cout << "Invalid number of Parameters!\n";
// 		return(1);
// 	}
// 	// char tempArray[str.length() + 1];
// 	// strcpy(tempArray, str.c_str());
	
// 	std::string str = argv[1];
// 	if(str.length() == 3)
// 		std::cout << "yes\n";
// 	if(str.length() == 1)
// 		std::cout << "no\n";
// 	ScalarConverter samet;
// 	samet.convert(str);
//     double d = std::atof(argv[1]);
// 	float f = std::atof(argv[1]);
// 	// std::cout << std::fixed << std::setprecision(1);
//     std::cout << "Double: " << d << std::endl;
//     std::cout << "Float: " << f << "f" << std::endl;
//     // std::cout << "Double: " << d << std::endl;
//     // std::cout << "Float: " << f << std::endl;
// 	return 0;
// }

// int main(int argc, char **argv) {
// 	if (argc == 2)
// 		ScalarConverter::convert(argv[1]);
// 	ScalarConverter::convert("A");
// 	std::cout << "1------------------------" << std::endl;
// 	ScalarConverter::convert("~");
// 	std::cout << "2------------------------" << std::endl;
// 	ScalarConverter::convert("0");
// 	std::cout << "3------------------------" << std::endl;
// 	ScalarConverter::convert("128");
// 	std::cout << "4------------------------" << std::endl;
// 	ScalarConverter::convert("-1");
// 	std::cout << "5------------------------" << std::endl;
// 	ScalarConverter::convert("2147483647");
// 	std::cout << "6------------------------" << std::endl;
// 	ScalarConverter::convert("2147483648");
// 	std::cout << "7------------------------" << std::endl;
// 	ScalarConverter::convert("-2147483648");
// 	std::cout << "8------------------------" << std::endl;
// 	ScalarConverter::convert("-2147483649");
// 	std::cout << "9------------------------" << std::endl;
// 	ScalarConverter::convert("-2147483649");
// 	std::cout << "10------HERE-------------" << std::endl;
// 	ScalarConverter::convert("2222222222222222222222222222222222222");
// 	std::cout << "11-----------------------" << std::endl;
// 	ScalarConverter::convert("22222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222");
// 	std::cout << "12-----HERE--------------" << std::endl;
// 	ScalarConverter::convert("333e12");
// 	std::cout << "13-----------------------" << std::endl;
// 	ScalarConverter::convert("333e-6");
// 	std::cout << "14-----------------------" << std::endl;
// 	ScalarConverter::convert("333e12f");
// 	std::cout << "15-----------------------" << std::endl;
// 	ScalarConverter::convert("333e-2f");
// 	std::cout << "16-----------------------" << std::endl;
// 	ScalarConverter::convert("inff");
// 	std::cout << "17-----------------------" << std::endl;
// 	ScalarConverter::convert("inf");
// 	std::cout << "18-----------------------" << std::endl;
// 	ScalarConverter::convert("nan");
// 	std::cout << "19-----------------------" << std::endl;
// 	ScalarConverter::convert("nanf");
// 	std::cout << "20-----------------------" << std::endl;
// 	ScalarConverter::convert("float");
// 	std::cout << "21-----------------------" << std::endl;
// 	ScalarConverter::convert("double");
// 	std::cout << "22-----------------------" << std::endl;

// 	return 0;
// }

int main(int argc, char **argv) {
	if(argc == 2)
	{
		std::istringstream deta(argv[1]);
		// char c = 'l';
		std::string filan;
		deta >> filan;
		std::cout << filan.length() << std::endl;
		std::cout << filan << std::endl;
		return 0;
	}
	std::string str = "3.40282347e+38F";
	std::istringstream data(str);
	float nbr = 0.0f;
	data >> nbr;
	nbr = nbr/512;
	// std::cout << std::fixed << num << std::endl
	std::cout << std::fixed << nbr << std::endl;
	std::cout << nbr << std::endl;
	return 0;
}