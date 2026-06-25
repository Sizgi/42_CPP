/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:28 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 17:09:28 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap samet("tarkan");
	std::cout << "\n";
	samet.attack("Kostok");
	std::cout << "\n";
	samet.takeDamage(2);
	std::cout << "\n";
	samet.takeDamage(20);
	std::cout <<"\n";
	samet.beRepaired(5);
	std::cout << "\n";
	ClapTrap sarah(samet);
	std::cout <<"\n";
	sarah.beRepaired(0);
	std::cout << "\n";
	ClapTrap bird;
	std::cout << "\n";
	bird = sarah;
	std::cout << "\n";
	bird.takeDamage(0);
	std::cout << "\n";
	bird.attack("someone");	
	return 0;
}