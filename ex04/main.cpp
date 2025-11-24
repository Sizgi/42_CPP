/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:03:29 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/22 16:29:16 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a program that takes three parameters in the following order: a filename and
// two strings, s1 and s2.
// It must open the file <filename> and copy its content into a new file
// <filename>.replace, replacing every occurrence of s1 with s2.
// Using C file manipulation functions is forbidden and will be considered cheating. All
// the member functions of the class std::string are allowed, except replace. Use them
// wisely!

// Of course, handle unexpected inputs and errors. You must create and turn in your
// own tests to ensure that your program works as expected.

////forbidden
//std::string::replace

#include <TheReplacer.hpp>

int main(int argc, char **argv)
{
	if(argc != 4)
		return 1;

	TheReplacer(std::string(argv[2]), std::string(argv[3]), std::string(argv[1]));
	return 0;
}