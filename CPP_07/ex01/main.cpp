/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:55:15 by sizgi             #+#    #+#             */
/*   Updated: 2026/05/27 14:40:12 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void exIncrement(int &parameter) {
	parameter++;
}

void exA(char &parameter) {
	parameter = 'A';
}

void exPi(double &parameter) {
	parameter = 3.14;
}

template <typename T>
void printValue(const T &value) {// Generic function template to pass as 3rd arg
    std::cout << value << std::endl;
}

// const-array test
void printConstInt(const int &value) {
    std::cout << value << std::endl;
}

void printIntNoSideEffects(const int &value) {
    std::cout << value << std::endl;
}

int main() {
	int a = 6;
	int exArray[6] = {1, 2, 3, 4, 5, 6};
	char exArray1[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
	double exArray2[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
	const int testA[6] = {1, 2, 3};
	try{
		iter(testA, -1, printConstInt);
		for(int i = 0; i < a; i++){
			std::cout << exArray[i] << std::endl;
		}
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		iter(exArray, -1, exIncrement);
		for(int i = 0; i < a; i++){
			std::cout << exArray[i] << std::endl;
		}
		
		iter(exArray1, a, exA);
		for(int i = 0; i < a; i++)
			std::cout << exArray1[i] << std::endl;
			
		iter(exArray2, a, exPi);
		for(int i = 0; i < a; i++)
			std::cout << exArray2[i] << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	int n = 6;
	
	std::cout << "\nFunction template as 3rd argument" << std::endl;
	try{
    	iter(exArray, n, printValue<int>);
    	iter(exArray2, n, printValue<double>);
		
    	std::cout << "\nconst array test" << std::endl;
    	const int constArray[5] = {10, 20, 30, 40, 50};
    	iter(constArray, 5, printConstInt);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
    	std::cout << "\nsize 0 test " << std::endl;
    	int oneElement[1] = {42};
    	iter(oneElement, 0, exIncrement); // must do nothing
    	std::cout << "size 0 call executed safely" << std::endl;
		
    	std::cout << "\nstd::string array test " << std::endl;
    	std::string words[4] = {"dragon", "king", "template", "iter"};
    	iter(words, 4, printValue<std::string>);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
    	std::cout << "\nno side effects callback test ===" << std::endl;
    	const int original[4] = {7, 8, 9, 10};
    	iter(original, 4, printIntNoSideEffects); // prints only
    	std::cout << "After iter (should be unchanged):" << std::endl;
    	for (int i = 0; i < 4; i++) std::cout << original[i] << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
