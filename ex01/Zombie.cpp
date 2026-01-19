/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:55:37 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/19 15:57:46 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *zombie =  new Zombie(name);
	return(zombie);
}
void Zombie::set_name(std::string zombie)
{
	name = zombie; 
}

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}

void Zombie::announce(void)
{
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string str)
{
	name = str;
}
Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << " got Destroyed" << std::endl;
}