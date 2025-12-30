/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:04:12 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/30 19:50:05 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	name = "def_char";
}

Character::~Character()
{
	std::cout << "Character deconstructer was here";
}

Character::Character(const Character &copy_from_this)
{
	*this = copy_from_this;
}

Character &Character::operator=(const Character &copy_from_this)
{
	if(this != &copy_from_this)
	{
		this->name = copy_from_this.name;
		this->m_source = copy_from_this.m_source;
		for(int i = 0; i < 4; i++)
			this->inventory[i] = copy_from_this.inventory[i];
	}
	std::cout << "\033[1;32mCharacter\033[0m Copy assignment operator 033[1;34massigned\033[0m a Character.\n";
	return *this;
}
std::string const &Character::getName() const
{
	return(name);
}

void Character::equip(AMateria *m)
{
	
}

void Character::unequip(int idx)
{
	
}

void Character::use(int idx, ICharacter& target)
{
	if(inventory[idx])
		
}
