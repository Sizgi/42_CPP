/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:31:14 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/22 18:01:15 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iomanip>

// int main(void)
// {
// 	Fixed		a;
// 	Fixed const b(Fixed(5.05f) * Fixed(2));
// 	Fixed const c(8388608);
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;

// 	Fixed x(0);
// 	x++;
// 	std::cout << "x: " << x << "\n";
// 	std::cout << "c: " << c << "\n";
// 	std::cout << "c / x: " << (c/x) << "\n";
	
	
// 	return(0);
// }

#define RESET   "\033[0m"
#define GREEN   "\033[32m"

#include <climits>
int	main(void)
{
	Fixed a(2147483647);
	//Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << GREEN << std::setw(10) << "a: " << a << RESET << std::endl;
	std::cout << std::setw(10) << "++a: " << ++a << std::endl;
	std::cout << GREEN << std::setw(10) << "a: " << a << RESET << std::endl;
	std::cout << std::setw(10) << "a++: " << a++ << std::endl;
	std::cout << GREEN << std::setw(10) << "a: " << a << RESET << std::endl;
	std::cout << GREEN << std::setw(10) << "b: " << b << RESET << std::endl;
	std::cout << std::setw(10) << "max(a,b): " << Fixed::max(a, b) << std::endl;
	std::cout << std::setw(10) << "min(a,b): " << Fixed::min(a, b) << std::endl;
	std::cout << std::setw(10) << "a > b: " << (a > b) << std::endl;
	std::cout << std::setw(10) << "a < b: " << (a < b) << std::endl;
	std::cout << std::endl;
	Fixed c(a);
	std::cout << GREEN << std::setw(10) << "c: " << c << RESET << std::endl;
	std::cout << std::setw(10) << "c >= b: " << (c >= b) << std::endl;
	std::cout << std::setw(10) << "c <= a: " << (c <= a) << std::endl;
	std::cout << std::setw(10) << "c == a: " << (c == a) << std::endl;
	std::cout << std::setw(10) << "c != a: " << (c != a) << std::endl;
	std::cout << std::endl;
	Fixed d(33);
	Fixed e(2);
	std::cout << GREEN << std::setw(10) << "d: " << d << RESET << std::endl;
	std::cout << std::setw(10) << "d + a: " << (d + a) << std::endl;
	std::cout << std::setw(10) << "d - a: " << (d - a) << std::endl;
	std::cout << GREEN << std::setw(10) << "d: " << d << RESET << std::endl;
	std::cout << GREEN << std::setw(10) << "e: " << e << RESET << std::endl;
	std::cout << std::setw(10) << "d * e: " << (d * e) << std::endl;
	std::cout << std::setw(10) << "d / e: " << (d / e) << std::endl;
	std::cout << GREEN << std::setw(10) << "a: " << a << RESET << std::endl;
	std::cout << std::setw(10) << "--a: " << --a << std::endl;
	std::cout << GREEN << std::setw(10) << "a: " << a << RESET << std::endl;
	std::cout << std::setw(10) << "a--: " << a-- << std::endl;
	std::cout << GREEN << std::setw(10) << "a: " << a << RESET << std::endl;
	
	return (0);
}
