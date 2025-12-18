/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:33:48 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/18 19:20:45 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructer constructed a WrongCat.\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructer destructed a WrongCat.\n";
}

WrongCat::WrongCat(const WrongCat &copy_from_this) : WrongAnimal(copy_from_this)
{
	*this = copy_from_this;
	std::cout << "WrongCat copy constructer constructed a WrongCat.\n";
}

WrongCat &WrongCat::operator=(const WrongCat &copy_from_this)
{
	if(this != &copy_from_this)
	{
		this->type = copy_from_this.type;
	}
	std::cout << "WrongCat Copy assignment operator was here\n";
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound\n";
}

void WrongCat::setType(std::string given_type)
{
	type = given_type;
}

std::string WrongCat::getType(void) const
{
	return type;
}