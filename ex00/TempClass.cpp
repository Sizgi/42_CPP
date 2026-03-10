/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TempClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:10:14 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/18 18:09:54 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TempClass.hpp"

// TempClass::TempClass() {}

// TempClass::~TempClass() {}

// TempClass::TempClass(const TempClass &) {}

// TempClass &TempClass::operator=(const TempClass &) {
// 	return *this;
// }


template <typename T>
void swap(T &valueA, T &valueB) {
	if(typeid(valueA) == typeid(valueB)) {
		T temp = valueA;
		valueA = valueB;
		valueB = temp;
	}
	else
		std::cout << "Given values are not the same type!" << std::endl;	
}
// template <typename T>
// T	&TempClass::min(const T &valueA, const T &valueB) {}
// template <typename T>
// T	&TempClass::max(const T &valueA, const T &valueB) {}















// • swap: Swaps the values of two given parameters. Does not return anything.
// • min: Compares the two values passed as parameters and returns the smallest one.
// If they are equal, it returns the second one.
// • max: Compares the two values passed as parameters and returns the greatest one.
// If they are equal, it returns the second one.


// These functions can be called with any type of argument. The only requirement is
// that the two arguments must have the same type and must support all the comparison
// operators.





// #include <typeinfo>
// #include <iostream>

// template <typename T>

// // void typeCheck(T valueToCheck) {
	
// // }

// T randomFunc(T mixType) {
// 	if(typeid(T) == typeid(int))
// 		std::cout << "Type: Int!"<< std::endl;
// 	else(typeid(T) == typeid(double))
// 		std::cout << "Type: Double" << std::endl;
// 	// typedef;
	
// }


// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap(a, b);
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }