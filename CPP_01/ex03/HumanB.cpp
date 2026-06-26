/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:10:46 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/21 14:01:52 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string n): name(n), Bs_weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
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


void HumanB::setWeapon(Weapon &weapon)
{
	Bs_weapon = &weapon;
}
