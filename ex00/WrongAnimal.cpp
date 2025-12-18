/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:33:07 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/18 19:18:41 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal default constructer constructed a WrongAnimal.\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructer destructed a WrongAnimal.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy_from_this)
{
	*this = copy_from_this;
	std::cout << "WrongAnimal copy constructer constructed a WrongAnimal.\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy_from_this)
{
	if(this != &copy_from_this)
	{
		this->type = copy_from_this.type;
	}
	std::cout << "WrongAnimal Copy assignment operator was here\n";
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound\n";
}

void WrongAnimal::setType(std::string given_type)
{
	type = given_type;
}

std::string WrongAnimal::getType(void) const
{
	return type;
}