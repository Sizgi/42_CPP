/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:10:40 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/12 13:34:45 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << getNameA() << " attacks with their " << As_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string n, Weapon &tip) : name(n), As_weapon(tip)
{
	;// setNameA(n);
}

HumanA::~HumanA()
{
	;
}

void HumanA::setNameA(std::string n)
{
	name = n;
}

std::string HumanA::getNameA()
{
	return(name);
}