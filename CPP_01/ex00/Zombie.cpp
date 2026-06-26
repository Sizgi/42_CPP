/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:55:37 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/19 18:12:23 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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