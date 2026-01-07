/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:20:24 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/07 14:45:10 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong input" << std::endl;
		return(1);
	}
	Harl dude;
	std::string str = std::string(av[1]);
	dude.complain(str);
	// dude.complain("DEBUG");
	// dude.complain("INFO");
	// dude.complain("WARNING");
	// dude.complain("ERROR");
	
	return(0);
}
