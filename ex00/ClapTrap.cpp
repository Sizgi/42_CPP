/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:31 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/11 17:21:13 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	name = "ossuruk";
	hit_point = 10;
	Energy_points = 10;
	Attack_points = 10;
}

ClapTrap::~ClapTrap(void)
{
	;
}

ClapTrap::ClapTrap(std::string given_name)
{
	name = given_name;
	hit_point = 10;
	Energy_points = 10;
	Attack_points = 10;

}

ClapTrap::ClapTrap(const ClapTrap &copy_from_this)
{
	*this = copy_from_this;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &copy_from_this)
{
	if(this != &copy_from_this)
		this->name = copy_from_this.name;
	return *this;
}
void ClapTrap::attack(const std::string& target)
{
	std::cout << name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << ", causing ";
	std::cout << Attack_points;
	std::cout << " points of damage!" << "\n";
}
// void ClapTrap::takeDamage(unsigned int amount)
// {}
// void ClapTrap::beRepaired(unsigned int amount)
// {
	
// }