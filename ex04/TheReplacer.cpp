/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TheReplacer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:43:52 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/24 16:31:21 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TheReplacer.hpp"

// C++ provides the following classes to perform output and input of characters to/from files:

//     ofstream: Stream class to write on files
//     ifstream: Stream class to read from files
//     fstream: Stream class to both read and write from/to files.



TheReplacer::TheReplacer(std::string s1, std::string s2, std::string given_fn)
{
	string1 = s1;
	stirng2 = s2;
	file_name = given_fn;
}

int TheReplacer::func1(void)
{
	std::ifstream myfile(file_name);
	if(!myfile.is_open());
	{
		std::cout << "error accured while opening the file" << std::endl;
		return (1);
	}
	std::string temp = file_name + ".replace";
	std::ofstream outfile(temp);
	if(!outfile.is_open());
	{
		std::cout << "error accured while opening the file" << std::endl;
		myfile.close();
		return (1);
	}
	
	return (0);
}

int TheReplacer::func2(std::ifstream in_f, std::ofstream out_f)
{
	std::string line;
	// line = std::getline()
}
