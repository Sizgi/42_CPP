/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:04:05 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 15:03:46 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("def_clap_name")
{
	name = "def";
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 30;
	std::cout << "DiamondTrap constructor constructed " << name << ".\n";
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructer destructed " << name << ".\n";
}
DiamondTrap::DiamondTrap(std::string given_name) : ClapTrap(given_name+"_clap_name")
{
	name = given_name;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 30;
	std::cout << "DiamondTrap parameterized constructor constructed " << given_name << ".\n";
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy_from_this) : ClapTrap(copy_from_this)
{
	std::cout << "DiamondTrap copy constructor was here.\n";
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy_from_this)
{
	if(this != &copy_from_this)
	{
		this->name = copy_from_this.name;
		this->Attack_damage = copy_from_this.Attack_damage;
		this->Hit_points = copy_from_this.Hit_points;
		this->Energy_points = copy_from_this.Energy_points;
	}
	std::cout << "DiamondTrap Copy assignment operator was here\n";
	return *this;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << ClapTrap::name+"\n"<< ScavTrap::name+"\n"<< FragTrap::name+"\n" << name+"\n";
}
