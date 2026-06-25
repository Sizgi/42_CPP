/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:49 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 15:09:17 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	DiamondTrap trap("TRAAAPP");
	std::cout << "\n\n";
	trap.whoAmI();
	std::cout << "\n";
	DiamondTrap tirep;
	std::cout << "\n\n";
	tirep.whoAmI();
	std::cout << "\n";
	trap.attack("samet");
	std::cout << "\n";
	DiamondTrap thor("Thor");
	std::cout << "\n";
	thor.attack("wall");
	std::cout << "\n";
	thor.beRepaired(12);
	std::cout << "\n";
	thor.takeDamage(7);
	std::cout << "\n";
	thor.guardGate();
	std::cout << "\n";
	thor.highFive(0);

	return 0;
}