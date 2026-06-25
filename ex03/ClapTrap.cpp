/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:31 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 16:20:47 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("clapyclap"), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap constructor constructed an object with the name \"";
	std::cout << name;
	std::cout << "\"." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "destructor has destructed " << name <<"."<< std::endl;
}

ClapTrap::ClapTrap(std::string given_name): name(given_name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap constructor constructed an object with the name \"";
	std::cout << name;
	std::cout << "\"." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy_from_this)
{
	std::cout << "ClapTrap copy constructor was here.\n";
	*this = copy_from_this;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &copy_from_this)
{
	std::cout << "ClapTrap Copy assignment operator was here\n";
	if(this != &copy_from_this)
	{
		this->name = copy_from_this.name;
		this->Attack_damage = copy_from_this.Attack_damage;
		this->Hit_points = copy_from_this.Hit_points;
		this->Energy_points = copy_from_this.Energy_points;
	}
	return *this;
}
void ClapTrap::attack(const std::string &target)
{
	if(Energy_points-1 <= 0)
	{
		std::cout << "It seems like after this attack ClapTraps Energy Point will hit 0..\n";
		std::cout << "NO I CANT STOP NOW!!!\n";
		std::cout << "Super CLAPTRAP mode!!!\n";
		Energy_points = 100;
		std::cout << "Energy_Points of "<< name <<": " <<Energy_points<< "\n";
	}
	--Energy_points;
	std::cout << "ClapTrap " << name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << ", causing ";
	std::cout << Attack_damage;
	std::cout << " points of damage!" << "\n";
	std::cout << "Energy_Points of "<< name <<": " <<Energy_points<< "\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name;
	std::cout << " got hit and lost ";
	std::cout << amount;
	std::cout << " points of HP!!!! oh godd it hurts.." << "\n";
	if((unsigned int)Hit_points <= amount)
	{
		std::cout << "It seems like ClapTraps HP will hit 0..\n";
		std::cout << "NO! I CANT LOSE LIKE THIS!!!\n";
		std::cout << "Super CLAPTRAP mode!!!\n";
		Hit_points = 100;
		std::cout << "Attack got Nullified\n";
		std::cout << "Hit_points of "<< name <<": " <<Hit_points<< "\n";
	}
	else
	{
		Hit_points -= amount;
		std::cout << "Hit_points of "<< name <<": " <<Hit_points<< "\n";
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(Energy_points-1 <= 0)
	{
		std::cout << "It seems like after this repair ClapTraps Energy Point will hit 0..\n";
		std::cout << "NO I CANT STOP NOW!!!\n";
		std::cout << "Super CLAPTRAP mode!!!\n";
		Energy_points = 100;
		std::cout << "Energy_Points of "<< name <<": " <<Energy_points<< "\n";
	}
	if(amount > INT_MAX)
		amount = 100;
	Hit_points += amount;
	if(Hit_points > 100 || Hit_points <= 0)
		Hit_points = 100;
	--Energy_points;
	std::cout << "ClapTrap " << name;
	std::cout << " repaired itself, it regained ";
	std::cout << amount;
	std::cout << " points of HP!" << "\n";
	std::cout << "Hit_points of "<< name <<": " <<Hit_points<< "\n";
	std::cout << "Energy_Points of "<< name <<": " <<Energy_points<< "\n";
}