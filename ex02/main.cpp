/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:41:47 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/21 15:56:27 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
	PmergeMe *yeni = new PmergeMe();
	if(argc == 2) {
		std::string tempStr = argv[1];
		yeni->mergerFunc(tempStr);
	}
}