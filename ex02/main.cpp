#include <iostream>
#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
	Array<int> *test = new Array<int>(MAX_VAL);
    int* mirror = new int[MAX_VAL];
	std::cout << numbers[0] << std::endl;
    srand(time(NULL));
	try{
		Array<int> testimo(-5);
	}
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
        	std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		// std::cout << "same" << std::endl;
	}
    try {
        numbers[-2] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }

    numbers = *test;
	delete test;
    for (int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i];
    delete [] mirror;//
    return 0;
}