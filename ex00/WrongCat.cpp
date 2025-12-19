/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:33:48 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/19 16:44:59 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "\033[38;5;214mWrongCat\033[0m default constructer constructed a WrongCat.\n";
}
// std::cout << "\033[1;31mWrongAnimal\033[0m copy constructer constructed a \033[1;31mWrongAnimal\033[0m.\n"

WrongCat::~WrongCat()
{
	std::cout << "\033[38;5;214mWrongCat\033[0m destructer destructed a WrongCat.\n";
}

WrongCat::WrongCat(const WrongCat &copy_from_this) : WrongAnimal(copy_from_this)
{
	*this = copy_from_this;
	std::cout << "\033[38;5;214mWrongCat\033[0m copy constructer constructed a WrongCat.\n";
}

WrongCat &WrongCat::operator=(const WrongCat &copy_from_this)
{
	if(this != &copy_from_this)
	{
		this->type = copy_from_this.type;
	}
	std::cout << "\033[38;5;214mWrongCat\033[0m Copy assignment operator was here\n";
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "\033[38;5;214mWrongCat\033[0m sound\n";
}

void WrongCat::setType(std::string given_type)
{
	type = given_type;
}

std::string WrongCat::getType(void) const
{
	return type;
}