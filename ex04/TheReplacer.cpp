/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TheReplacer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:43:52 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/25 16:59:51 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TheReplacer.hpp"

// C++ provides the following classes to perform output and input of characters to/from files:

//     ofstream: Stream class to write on files
//     ifstream: Stream class to read from files
//     fstream: Stream class to both read and write from/to files.


//Consider checking if file is readable as text
//getline need a check ?

TheReplacer::TheReplacer(std::string s1, std::string s2, std::string given_fn)
{
	string1 = s1;
	str1_s = s1.size();
	stirng2 = s2;
	str2_s = s2.size();
	file_name = given_fn;
}

void TheReplacer::error_function(int code)
{
	switch (code)
	{
	case 0:
		std::cout << "Error, first string cant be empty" << std::endl;
		break;
	case 1:
		std::cout << "Error accured while opening the given file" << std::endl;
		break;
	case 2:
		std::cout << "error accured while opening the replace file" << std::endl;
		break;
	default:
		break;
	}
}

int TheReplacer::func1(void)
{
	if(str1_s == 0)
	{
		error_function(0);
		return (1);
	}
	std::ifstream myfile(file_name.c_str());
	if(!myfile.is_open())
	{
		error_function(1);
		return (1);
	}
	std::string temp = file_name + ".replace";
	std::ofstream outfile(temp.c_str());
	if(!outfile.is_open())
	{
		error_function(2);
		myfile.close();
		return (1);
	}
	if(!empty_fcheck(myfile))
		func2(myfile, outfile);
	myfile.close();
	outfile.close();
	return (0);
}

int TheReplacer::empty_fcheck(std::ifstream &in_f)
{
	in_f.seekg(0, in_f.end);
	if (in_f.tellg() == 0)
		return (1);
	in_f.seekg(0, in_f.beg);
	return(0);
}

size_t TheReplacer::multi_rep(std::string line, std::ofstream &out_f)
{
	size_t	tracker = 0;
	while(1)
	{
		tracker = line.find(string1, tracker);
		if(tracker != std::string::npos)
		{
			line.erase(tracker, str1_s);
			line.insert(tracker, stirng2);
			tracker = tracker + str2_s;
		}
		else
			break;
	}
	out_f << line;
	return 0;
}

int TheReplacer::func2(std::ifstream &in_f, std::ofstream &out_f)
{
	std::string line;
	int deneme = 0;
	
	while(!in_f.eof())
	{
		if(deneme != 0)
			out_f << std::endl;
		deneme++;
		getline(in_f, line);
		multi_rep(line, out_f);
	}
	std::cout << deneme << std::endl;
	return(0);
}
