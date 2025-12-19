/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:33:07 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/19 16:44:27 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "\033[1;31mWrongAnimal\033[0m default constructer constructed a WrongAnimal.\n";
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[1;31mWrongAnimal\033[0m destructer destructed a WrongAnimal.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy_from_this)
{
	*this = copy_from_this;
	std::cout << "\033[1;31mWrongAnimal\033[0m copy constructer constructed a WrongAnimal.\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy_from_this)
{
	if(this != &copy_from_this)
	{
		this->type = copy_from_this.type;
	}
	std::cout << "\033[1;31mWrongAnimal\033[0m Copy assignment operator was here\n";
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "\033[1;31mWrongAnimal\033[0m sound\n";
}

void WrongAnimal::setType(std::string given_type)
{
	type = given_type;
}

std::string WrongAnimal::getType(void) const
{
	return type;
}