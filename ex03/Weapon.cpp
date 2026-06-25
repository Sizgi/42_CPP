/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:10:53 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/21 14:15:02 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string tip)
{
	type = tip;
}

std::string Weapon::getType(void)
{
	return(type);
}
Weapon::Weapon()
{
	setType("Enma");
}

Weapon::Weapon(std::string name)
{
	if(name == "\0")
			setType("Enma");
	setType(name);
}
Weapon::~Weapon()
{
	;
}
