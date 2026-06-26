/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:28 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 15:27:36 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	FragTrap samet("Samet");
	std::cout << "\n";
	FragTrap sarah(samet);
	std::cout << "\n";
	FragTrap thor("Thor");
	std::cout << "\n";
	FragTrap loki("Loki");
	std::cout << "\n";
	thor.attack("loki");
	std::cout << "\n";
	thor = loki;
	std::cout << "\n";
	thor.attack("loki");
	std::cout << "\n";
	thor.beRepaired(12);
	std::cout << "\n";
	thor.takeDamage(7);
	std::cout << "\n";
	thor.highFive(0);

	return 0;
}