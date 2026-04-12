/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:58:16 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/12 15:44:08 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// $> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
// 42
// $> ./RPN "7 7 * 7 -"
// 42
// $> ./RPN "1 2 * 2 / 2 * 2 4 - +"
// 0
// $> ./RPN "(1 + 1)"
// Error
// $>

#include "RPN.hpp"

int main(int argc, char **argv) {
	if(argc != 2) {
		std::cerr << "Invalid argument count!" << std::endl;
		return 1;
	}
	std::string temp = argv[1];
	RPN start;
	try{
		start.startFunction(temp);
	}
	catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}