/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:03:29 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/19 18:19:58 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "TheReplacer.hpp"

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "Incorrect argument count, need: 3" << std::endl;
		return 1;
	}
	std::string s1 = std::string(argv[2]);
	std::string s2 = std::string(argv[3]);
	std::string given_fn = std::string(argv[1]);
	
	TheReplacer samet(s1, s2, given_fn);
	if(samet.func1())
		return(1);
	return 0;
}