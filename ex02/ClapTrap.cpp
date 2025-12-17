/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:31 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/16 15:23:18 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	name = "Kilep";
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 10;
	std::cout << "ClapTrap constructor was here\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap decstructer destructed " << name << ".\n";
}

ClapTrap::ClapTrap(std::string given_name)
{
	name = given_name;
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 10;
	std::cout << "ClapTrap parameterized constructor was here.\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy_from_this)
{
	*this = copy_from_this;
	std::cout << "ClapTrap copy constructor was here.\n";
}
ClapTrap &ClapTrap::operator=(const ClapTrap &copy_from_this)
{
	if(this != &copy_from_this)
	{
		this->name = copy_from_this.name;
		this->Attack_damage = copy_from_this.Attack_damage;
		this->Hit_points = copy_from_this.Hit_points;
		this->Energy_points = copy_from_this.Energy_points;
	}
	std::cout << "ClapTrap Copy assignment operator was here\n";
	return *this;
}
void ClapTrap::attack(const std::string& target)
{
	Energy_points -= 1;
	std::cout << name << " attacks " << target <<", causing ";
	std::cout << Attack_damage << " points of damage!" << "\n";
	std::cout << name << " has " << Energy_points << " Energy points left.\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
	Hit_points -= amount;
	std::cout << name << " took " << amount << " damage.\n";
	std::cout << name << " has " << Hit_points << " HP left.\n";
}
void ClapTrap::beRepaired(unsigned int amount)
{
	Hit_points += amount;
	std::cout << name << " repaired itself "<< amount << " HP.\n";
	Energy_points -= 1;
	std::cout << name << " has now " << Hit_points << " HP ";
	std::cout << "and " << Energy_points << " Energy points.\n";
}