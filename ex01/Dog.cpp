/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:38:36 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/20 20:52:14 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type = "dog";
	dogBrain = new Brain();
	std::cout << "Dog default constructer constructed a dog.\n";
}

Dog::~Dog()
{
	delete dogBrain;
	std::cout << "Dog destructer destructed a dog.\n";
}

Dog::Dog(const Dog &copy_from_this) : Animal(copy_from_this)
{
	std::cout << "Dog copy constructer constructed a dog.\n";
}

Dog &Dog::operator=(const Dog &copy_from_this)
{
	if(this != &copy_from_this)
	{
		delete dogBrain;
		this->dogBrain = new Brain(*copy_from_this.dogBrain);
		this->type = copy_from_this.type;
	}
	std::cout << "Dog copy assignment operator copied a dog\n";
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "HAV HAV\n";
}

std::string Dog::getIdea(int index) const
{
	if(index > 99 || index < 0)
		exit(1);
	return(dogBrain->ideas[index]);
}

void Dog::setIdea(int index, std::string str_to_set)
{
	dogBrain->ideas[index] = str_to_set; 
}

// std::string Dog::getType(void)
// {
// 	return type;
// }

// void Dog::setType(std::string given_type)
// {
// 	type = given_type;
// }
