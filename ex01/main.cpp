/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:17:01 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/25 15:25:38 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j;//should not create a leak
	delete i;

	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat();
	std::string myName = "samet";
	cat1->setIdea(110, myName);
	std::cout << cat1->getIdea(10)+"\n";
	std::cout << cat2->getIdea(10)+"\n\n\n";
	
	Dog *dog2 = new Dog();
	std::string myKame = "aglkasjgl";
	dog2->setIdea(110, myKame);
	std::cout << dog2->getIdea(10)+"\n";
	myKame = "smsmsms";
	std::cout << dog2->getIdea(10)+"\n\n\n";

	
	*cat2 = *cat1;
	std::cout << cat1->getIdea(10)+"\n";
	delete cat1;
	std::cout << cat2->getIdea(10)+"\n";
	delete cat2;
	delete dog2;

	std::cout << "\nARRAY-TEST\n";
	const int size = 100;
	Animal* animals[size];
	
	for (int i = 0; i < (size / 2); i++)
	{
		std::cout << "\n";
		animals[i] = new Dog();
	}
	for (int i = (size / 2); i < size; i++)
	{
		std::cout << "\n";
		animals[i] = new Cat();
	}
	
	std::cout << "\n" << animals[2]->getType() <<"\n";
	std::cout << "\n" << animals[80]->getType() <<"\n";
	
	std::cout << "\n=== Deleting all Animals ===\n";
	for (int i = 0; i < size; i++)
		delete animals[i];
	
	return 0;
}
