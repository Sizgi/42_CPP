/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:55:58 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/18 18:38:57 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TempClass.hpp"

// int main() {
// 	int i = 10;
// 	int j = 20;
// 	swap(i, j);
// 	std::cout << "old iValue: 10, new iValue: "<< i <<std::endl;
// 	std::cout << "old jValue: 20, new jValue: "<< j <<std::endl;
// 	int temp = min (i, j);
// 	std::cout << "iValue: 20, jValue:10, minValue: "<< temp <<std::endl;
// 	temp = max(i, j);
// 	std::cout << "iValue: 20, jValue:10, maxValue: "<< temp <<std::endl;
// 	return 0;
// }


int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}