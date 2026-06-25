/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:28 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 17:09:38 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{	
	ScavTrap samet("Samet");
	std::cout << "\n";
	samet.guardGate();
	std::cout << "\n";
	ScavTrap sarah(samet);
	std::cout << "\n";
	ScavTrap thor("Thor");
	std::cout << "\n";
	ScavTrap loki("Loki");
	std::cout << "\n";
	thor.attack("loki");
	std::cout << "\n";
	thor = loki;
	std::cout << "\n";
	thor.attack("loki");
	std::cout << "\n";
	thor.takeDamage(3);
	std::cout << "\n";
	thor.beRepaired(12);
	std::cout << "\n";
	loki.beRepaired(12);
	std::cout << "\n";
	for (int i = 0; i < 60; i++)
	{
		std::cout << "\n";
		thor.beRepaired(10);
	}

	return 0;
}