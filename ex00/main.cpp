/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:32:31 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 17:37:12 by sizgi            ###   ########.fr       */
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
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	std::cout << "\n\n\n";
	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *wrang = new WrongCat();
	std::cout << wrong->getType() << std::endl;
	std::cout << wrang->getType() << std::endl;
	wrong->makeSound();
	wrang->makeSound();

	delete wrong;
	delete wrang;
	
	return 0;
}