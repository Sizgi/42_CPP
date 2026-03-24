/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:59:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/24 14:21:52 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Btc.hpp"
#include <fstream>
#include <sstream>

bool argCheck(const std::string &argument) {
	std::string fileTyp = ".csv";
	bool valid = false;
	size_t check = 0;

	check = argument.rfind(fileTyp);
	if( check != std::string::npos) {
		valid = true;
		if( valid == true && argument.size() != check+4) {
			std::cout << "nope" << std::endl;
			valid = false;
		}
	}
	//// ALTERNATE-METHOD ////
	// if (argument.size() < fileTyp.size())
    //     return false;

    // // Valid if the string ends with ".csv"
    // return argument.compare(argument.size() - fileTyp.size(), fileTyp.size(), fileTyp) == 0;
	return valid;
}

int main (int argc, char **argv) {
	if(argc != 2) {
		std::cout << "Invalid argument count!" << std::endl;
		return(1);
	}
	if(!argCheck(argv[1])) {
		std::cout << "Invalid argument typ!" << std::endl;
		return(1);
	}
	//file opening
	std::ifstream givenFile(argv[1]);
	if(!givenFile.is_open())
		throw std::runtime_error("Could not open the given File!\n");
	//file opening
	std::cout << argv[1] << std::endl;
	return (0);
}