/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:10:46 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/19 16:56:25 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

void HumanB::attack()
{
	// FEHLT: schauen ob waffe hat
	if (Bs_weapon == NULL)
    {
        std::cout << getNameB() << " has no weapon to attack with!" << std::endl;
        return;
    }
	std::cout << getNameB() << " attacks with their " << Bs_weapon->getType() << std::endl;
}
void HumanB::setNameB(std::string n)
{
	name = n;
}
std::string HumanB::getNameB()
{
	return(name);
}

HumanB::HumanB(std::string n)
{
	setNameB(n);
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	Bs_weapon = &weapon;
}
std::string HumanB::getWeapon()
{
	return Bs_weapon->getType();
}


