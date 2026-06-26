/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:59:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/03 14:15:02 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// bool dataCheck(const std::string &argument) {
// 	std::string fileTyp = ".csv";
// 	bool valid = false;
// 	size_t check = 0;

// 	check = argument.rfind(fileTyp);
// 	if( check != std::string::npos) {
// 		valid = true;
// 		if( valid == true && argument.size() != check+4) {
// 			std::cout << "nope" << std::endl;
// 			valid = false;
// 		}
// 	}
// 	return valid;
// }

int main (int argc, char **argv) {
	if(argc != 2) {
		std::cerr << "Invalid argument count!" << std::endl;
		return(1);
	}
	std::string fileName = argv[1];
	try {
		BitcoinExchange btcE;
		btcE.exchanger(fileName);
	}
	catch(std::exception &e) {
		std::cerr << e.what()<< std::endl;
	}
	return (0);
}