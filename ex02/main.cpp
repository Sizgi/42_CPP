/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:55:56 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/17 19:34:23 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base *generate(void) {
	srand(time(NULL));
	Base *ptr;
	int randomNumber = 0;
	randomNumber = rand() % 3;
	if(randomNumber == 0)
		ptr = new A();
	else if(randomNumber == 1)
		ptr = new B();
	else
		ptr = new C();
	return ptr;
}
// It randomly instantiates A, B, or C and returns the instance as a Base pointer. Feel free
// to use anything you like for the random choice implementation.

void identify(Base* p) {
	A *aPtr = dynamic_cast<A*>(p);
	if(aPtr != NULL) {
		std::cout << "It's type A!(*p)" << std::endl;
		return;
	}
	else {
		B *bPtr = dynamic_cast<B*>(p);
		if(bPtr != NULL) {
			std::cout << "It's type B!(*p)" << std::endl;
			return;
		}
		else {
			C *cPtr = dynamic_cast<C*>(p);
			if(cPtr != NULL)
				std::cout << "It's type C!(*p)" << std::endl;
			}
		}
}
// It prints the actual type of the object pointed to by p: "A", "B", or "C".

void identify(Base &p) {
	try {
		A aPtr = dynamic_cast<A&>(p);
		std::cout << "It's type A!(&)" << std::endl;
		return;
	}
	catch(std::exception &a) {
		std::cout << "It's not type A!" << std::endl;
	}
	try {
		B bPtr = dynamic_cast<B&>(p);
		std::cout << "It's type B!(&)" << std::endl;
		return;
	}
	catch(std::exception &b) {
		std::cout << "It's not type B!" << std::endl;
	}
	try {
		C cptr = dynamic_cast<C&>(p);
		std::cout << "It's type C!(&)" << std::endl;
		return;
	}
	catch(std::exception &c) {
		std::cout << "It's also not type C!, something went wrong!" << std::endl;
	}
	return;
}

int main() {
	
	Base *ptr = generate();
	identify(ptr);
	Base *ptr1 = generate();
	identify(*ptr1);
	
	delete ptr;
	delete ptr1;
	return 0;
}