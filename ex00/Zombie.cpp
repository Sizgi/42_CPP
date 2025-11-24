/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:55:37 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/10 16:20:07 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *zombie =  new Zombie(name);
	
	return(zombie);
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

Zombie::Zombie(std::string n)
{
	name = n;
}
Zombie::~Zombie()
{
	std::cout << name << " got Destroyed" << std::endl;
}