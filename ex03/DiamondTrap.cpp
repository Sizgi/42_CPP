/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:04:05 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/17 20:23:28 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_def")
{
	name = "def";
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 30;
	std::cout << "DiamondTrap constructer constructed " << name << ".\n";
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructer destructed " << name << ".\n";
}
DiamondTrap::DiamondTrap(std::string given_name) : ClapTrap("_clap_"+given_name)
{
	name = given_name;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 30;
	std::cout << "DiamondTrap parameterized constructer constructed " << given_name << ".\n";
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
	std::cout << ClapTrap::name+"\n" << name+"\n";
}

// void DiamondTrap::Spec(void)
// {
// 	std::cout << Hit_points << "\n" << Energy_points << "\n" << Attack_damage << "\n";
// }