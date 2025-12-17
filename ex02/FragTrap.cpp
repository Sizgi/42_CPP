/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:34 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/16 17:30:12 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	name = "Frog";
	Attack_damage = 30;
	Energy_points = 100;
	Hit_points = 100;
	std::cout << "FragTrap constructer constructed " << name << ".\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructer destructed " << name << ".\n";
}

FragTrap::FragTrap(std::string given_name) : ClapTrap(given_name)
{
	Attack_damage = 30;
	Energy_points = 100;
	Hit_points = 100;
	std::cout << "FragTrap parameterized constructer constructed " << given_name << ".\n";
}

FragTrap::FragTrap(const FragTrap &copy_from_this) : ClapTrap(copy_from_this)
{
	std::cout << "FragTrap copy constructor was here.\n";
}

FragTrap &FragTrap::operator=(const FragTrap &copy_from_this)
{
	if(this != &copy_from_this)
	{
		this->name = copy_from_this.name;
		this->Attack_damage = copy_from_this.Attack_damage;
		this->Hit_points = copy_from_this.Hit_points;
		this->Energy_points = copy_from_this.Energy_points;
	}
	std::cout << "FragTrap Copy assignment operator was here\n";
	return *this;
}

void FragTrap::highFive(int i)
{
	std::string user_option;
	if(i == 0)
	{
		std::cout << "You started the High-Five reactor, now you have 2 option..\n";
		std::cout << "eighter you write no and dont give me a highfive or write yes and give me one.. \n";
		std::cout << "if you give me one, everybody will be happy!\n";
		std::cout << "But if you write no and dont give me one.. than nothing happens and life continues..\n";
		std::cout << "like what should i do? Kill everyone you know only because you didnt give me a highfive ??\n";
		std::cout << "hahahAHAHAHA why should i do that? ahhahahaHAHAHAH!!!!\n";
	}
	std::getline(std::cin, user_option);
	if(std::cin.eof() || std::cin.fail())
		return;
	if(user_option == "no")
	{
		std::cout << "its okay, its aight. But i would call my parents just in case you know?\n";
		std::cout << "HAHAHAHAHA!!!\n";
	}
	else if(user_option == "yes")
		std::cout << "Yeay Its my very First highfive, i was tired from killing people!!\n";
	else
	{
		std::cout << "I didnt get your answer, write a proper one!!." << std::endl;
		highFive(1);
	}
}