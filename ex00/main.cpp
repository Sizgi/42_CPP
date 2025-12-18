/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:32:31 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/18 19:17:42 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;

	const WrongAnimal *wong = new WrongAnimal();
	const WrongAnimal *wang = new WrongCat();
	std::cout << wong->getType() << std::endl;
	std::cout << wang->getType() << std::endl;
	wong->makeSound();
	wang->makeSound();

	delete wong;
	delete wang;
	return 0;
}