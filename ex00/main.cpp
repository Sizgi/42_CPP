/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:31:14 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/19 18:56:10 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// From now on, all your classes must be designed in the Orthodox Canonical Form,
// unless explicitly stated otherwise. They will then implement the four required member
// functions below:
// • Default constructor
// • Copy constructor
// • Copy assignment operator
// • Destructor
// Split your class code into two files. The header file (.hpp/.h) contains the class
// definition, whereas the source file (.cpp) contains the implementation.

// The Orthodox Canonical Form in C++ involves defining 5 special member functions for a class.

//     Default Constructor
//     Parameterized Constructor
//     Copy Constructor
//     Assignment Operator
//     Destructo

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	return(0);
}
