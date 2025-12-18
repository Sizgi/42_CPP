/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:27:04 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/18 18:28:12 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	type = "cat";
	std::cout << "Cat default constructer constructed a cat.\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructer destructed a cat.\n";
}

Cat::Cat(const Cat &copy_from_this) : Animal(copy_from_this)
{
	std::cout << "Cat copy constructer constructed a cat.\n";
}

Cat &Cat::operator=(const Cat &copy_from_this)
{
	if(this != &copy_from_this)
		this->type = copy_from_this.type;
	std::cout << "Cat copy assignment operator copied a cat\n";
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Miav\n";
}

// std::string Cat::getType(void)
// {
// 	return type;
// }

// void Cat::setType(std::string given_type)
// {
// 	type = given_type;
// }
