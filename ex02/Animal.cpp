/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:09:36 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/26 14:44:02 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	type = "dragon";
	std::cout << "Animal default constructer constructed an Animal.\n";
}
Animal::~Animal()
{
	std::cout << "Animal destructer destructed an Animal.\n";
}
// Animal(std::string given_name);
Animal::Animal(const Animal &copy_from_this)
{
	*this = copy_from_this;
	std::cout << "Animal copy constructer constructed an Animal.\n";
}

Animal &Animal::operator=(const Animal &copy_from_this)
{
	if(this != &copy_from_this)
		this->type = copy_from_this.type;
	std::cout << "Animal Copy assignment operator was here\n";
	return *this;
}

std::string Animal::getType(void) const
{
	return type;
}
void Animal::setType(std::string given_type)
{
	type = given_type;
}
