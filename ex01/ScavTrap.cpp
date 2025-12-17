/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:34 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/16 15:21:58 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	name = "Tuzak";
	Attack_damage = 20;
	Energy_points = 50;
	Hit_points = 100;
	std::cout << "Scavtrap constructer constructed " << name << ".\n";
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
	std::cout << "Scavtrap parameterized constructer constructed " << given_name << ".\n";
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

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap "<< name <<"'s Gatekeeper mode activated.\n";
}