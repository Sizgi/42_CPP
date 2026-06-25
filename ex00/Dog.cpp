/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:38:36 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 17:44:07 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type = "dog";
	std::cout << "Dog default constructor constructed a dog.\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructor destructed a dog.\n";
}

Dog::Dog(const Dog &copy_from_this) : Animal(copy_from_this)
{
	std::cout << "Dog copy constructor constructed a dog.\n";
}

Dog &Dog::operator=(const Dog &copy_from_this)
{
	if(this != &copy_from_this)
		this->type = copy_from_this.type;
	std::cout << "Dog copy assignment operator copied a dog\n";
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "HAV HAV\n";
}
