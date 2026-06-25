/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:33:48 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 17:57:05 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "\033[38;5;214mWrongCat\033[0m default constructor constructed a WrongCat.\n";
}

WrongCat::~WrongCat()
{
	std::cout << "\033[38;5;214mWrongCat\033[0m destructor destructed a WrongCat.\n";
}

WrongCat::WrongCat(const WrongCat &copy_from_this) : WrongAnimal(copy_from_this)
{
	*this = copy_from_this;
	std::cout << "\033[38;5;214mWrongCat\033[0m copy constructor constructed a WrongCat.\n";
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

std::string WrongCat::getType(void) const
{
	return type;
}