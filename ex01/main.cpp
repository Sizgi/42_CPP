/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:55:15 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/21 16:02:44 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	size_t a = 6;
	int exArray[6] = {1, 2, 3, 4, 5, 6};
	char exArray1[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
	double exArray2[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
	iter(exArray, a, exFunc);
	for(size_t i = 0; i < a; i++)
		std::cout << exArray[i] << std::endl;
	iter(exArray1, a, exFunc1);
	for(size_t i = 0; i < a; i++)
		std::cout << exArray1[i] << std::endl;
	iter(exArray2, a, exFunc2);
	for(size_t i = 0; i < a; i++)
		std::cout << exArray2[i] << std::endl;
	return 0;
}