/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:34 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 16:22:06 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	Attack_damage = 20;
	Energy_points = 50;
	Hit_points = 100;
	std::cout << "Scavtrap constructor constructed " << name << ".\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scavtrap destructer destructed " << name << ".\n";
}

ScavTrap::ScavTrap(std::string given_name) : ClapTrap(given_name)
{
	Attack_damage = 20;
	Energy_points = 50;
	Hit_points = 100;
	std::cout << "Scavtrap parameterized constructor constructed " << given_name << ".\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy_from_this) : ClapTrap(copy_from_this)
{
	std::cout << "ScavTrap copy constructor was here.\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy_from_this)
{
	if(this != &copy_from_this)
	{
		this->name = copy_from_this.name;
		this->Attack_damage = copy_from_this.Attack_damage;
		this->Hit_points = copy_from_this.Hit_points;
		this->Energy_points = copy_from_this.Energy_points;
	}
	std::cout << "ScavTrap Copy assignment operator was here\n";
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if(Energy_points-1 <= 0)
	{
		std::cout << "It seems like after this attack ScavTrap Energy Point will hit 0..\n";
		std::cout << "NO I CANT STOP NOW!!!\n";
		std::cout << "Super ScavTrap mode!!!\n";
		Energy_points = 100;
		std::cout << "Energy_Points of "<< name <<": " <<Energy_points<< "\n";
	}
	--Energy_points;
	std::cout << "ScavTrap ";
	std::cout << name << " Blasts " << target <<", causing ";
	std::cout << Attack_damage << " points of damage!" << "\n";
	std::cout << name << " has " << Energy_points << " Energy points left.\n";
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap "<< name <<"'s Gatekeeper mode activated.\n";
}