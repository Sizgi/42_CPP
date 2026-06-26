/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:17:01 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/25 15:59:31 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// Animal abstract;
	// const Animal *test = new Animal();
	// Animal stack_animal;
	
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	j->makeSound();
	i->makeSound();
	
	delete j;
	delete i;
	
	std::cout << "\n";
	
	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat();
	
	std::string name = "samet";
	cat1->setIdea(10, name);
	
	std::cout << cat1->getIdea(10) << "\n";
	std::cout << cat2->getIdea(10) << "\n\n";
	
	*cat2 = *cat1;
	std::cout << cat1->getIdea(10) << "\n";
	delete cat1;
	std::cout << cat2->getIdea(10) << "\n";
	delete cat2;
	
	std::cout << "\n";
	
	// const int size = 10;
	// Animal* animals[size];
	
	// for (int k = 0; k < size / 2; k++)
	// 	animals[k] = new Dog();
	// for (int k = size / 2; k < size; k++)
	// 	animals[k] = new Cat();
	
	// for (int k = 0; k < size; k++)
	// 	delete animals[k];
	
	return 0;
}