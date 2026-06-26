/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:09:36 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/25 15:31:40 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("dragon")
{
	std::cout << "Animal default constructor constructed an Animal.\n";
}
Animal::~Animal()
{
	std::cout << "Animal destructor destructed an Animal.\n";
}
Animal::Animal(const Animal &copy_from_this)
{
	*this = copy_from_this;
	std::cout << "Animal copy constructor constructed an Animal.\n";
}

Animal &Animal::operator=(const Animal &copy_from_this)
{
	if(this != &copy_from_this)
		this->type = copy_from_this.type;
	std::cout << "Animal assignment operator was here\n";
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "ROAR!!\n";
}

std::string Animal::getType(void) const
{
	return type;
}
