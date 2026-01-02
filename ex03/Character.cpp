/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:04:12 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/02 20:06:17 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	name = "def_char";
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const std::string &given_name)
{
	name = given_name;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if(inventory[i])
			delete inventory[i];
	}
	std::cout << "Character destructer \033[1;31mdestructed\033[0m a Character\n";
}

Character::Character(const Character &copy_from_this)
{
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = copy_from_this;
}

Character &Character::operator=(const Character &copy_from_this)
{
	if(this != &copy_from_this)
	{
		this->name = copy_from_this.name;
		for(int i = 0; i < 4; i++)
		{
			if(this->inventory[i])
			{
				delete this->inventory[i];
				this->inventory[i] = NULL;
			}
			if(copy_from_this.inventory[i])
				this->inventory[i] = copy_from_this.inventory[i]->clone();
		}
			// this->inventory[i] = copy_from_this.inventory[i];
	}
	std::cout << "\033[1;32mCharacter\033[0m Copy assignment operator \033[1;34massigned\033[0m a Character.\n";
	return *this;
}
std::string const &Character::getName() const
{
	return(name);
}

void Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if(!inventory[i])
		{
			inventory[i] = m;
			std::cout << m->getType() << " equiped in the inventory slot " << i << "\n";
			return;
		}
	}
	std::cout<< "NOTHING HAPPENED\n";
}

void Character::unequip(int idx)
{
	if(idx < 4 && idx >=0)
	{
		if(inventory[idx])
		{
			std::cout << inventory[idx]->getType() << " unequiped from the inventory slot " << idx << "\n";
			inventory[idx] = NULL;
			return;
		}
	}
	std::cout << "NOTHING HAPPENED\n";
}

void Character::use(int idx, ICharacter &target)
{
	if(idx < 4 && idx >=0)
	{
		if(inventory[idx])
			inventory[idx]->use(target);
	}
}
