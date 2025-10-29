/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:25:19 by sizgi             #+#    #+#             */
/*   Updated: 2025/10/23 17:48:08 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

void MegaPhone::str_func(std::string str)
{
	char c;
	

	for(size_t i = 0; i < str.length(); i++)
	{
		c = toupper(str[i]);
		std::cout << c;
	}
	return;
}

int main(int argc, char **argv)
{
	int i = 1;
	MegaPhone word;

	if(argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(i = 1; i <= (argc - 1); i++)
		{
			word.str = argv[i];
			word.str_func(word.str);
		}
		std::cout << std::endl;
	}
	return(0);
}