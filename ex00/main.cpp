/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:03:32 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/11 17:38:11 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <string>
#include <iomanip>

int main(int argc, char **argv) {
	if(argc != 2)
	{
		std::cout << "Invalid number of Parameters!\n";
		return(1);
	}
	// char tempArray[str.length() + 1];
	// strcpy(tempArray, str.c_str());
	
	std::string str = argv[1];
	if(str.length() == 3)
		std::cout << "yes\n";
	if(str.length() == 1)
		std::cout << "no\n";
	ScalarConverter samet;
	samet.convert(str);

    double d = std::atof(argv[1]);
	float f = std::atof(argv[1]);
	// std::cout << std::fixed << std::setprecision(1);
    std::cout << "Double: " << d << std::endl;
    std::cout << "Float: " << f << "f" << std::endl;
    // std::cout << "Double: " << d << std::endl;
    // std::cout << "Float: " << f << std::endl;
	return 0;
}