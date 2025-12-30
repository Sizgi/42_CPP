/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:27:04 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/26 17:15:07 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	type = "cat";
	catBrain = new Brain();
	std::cout << "Cat default constructer constructed a cat.\n";
}

Cat::~Cat()
{
	delete catBrain;
	std::cout << "Cat destructer destructed a cat.\n";
}

Cat::Cat(const Cat &copy_from_this) : Animal(copy_from_this)
{
	this->catBrain = new Brain(*copy_from_this.catBrain);
	std::cout << "Cat copy constructer constructed a cat.\n";
}

Cat &Cat::operator=(const Cat &copy_from_this)
{
	if(this != &copy_from_this)
	{
		// delete catBrain;
		// this->catBrain = new Brain(*copy_from_this.catBrain);
		*this->catBrain = *copy_from_this.catBrain;
		this->type =  copy_from_this.type;
	}
	std::cout << "Cat copy assignment operator copied a cat\n";
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Miav\n";
}
std::string Cat::getIdea(int index) const
{
	if(index > 99 || index < 0)
	{
		std::cout << "your index is shieet. (" << index <<") so i will show you the first idea the cat has\n";
		return(catBrain->ideas[0]);
	};
	return(catBrain->ideas[index]);
}

void Cat::setIdea(int index, std::string str_to_set)
{
	if(index > 99 || index < 0)
		std::cout << "your index is shieet. (" << index << ") so nothing will happen.\n";
	catBrain->ideas[index] = str_to_set;
}

// std::string Cat::getType(void)
// {
// 	return type;
// }

// void Cat::setType(std::string given_type)
// {
// 	type = given_type;
// }
