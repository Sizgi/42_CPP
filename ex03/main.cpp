/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 14:52:01 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/25 16:42:34 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	std::cout << "\n\n\n";
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "\n\n\n";
	delete bob;
	delete me;
	delete src;
	std::cout << "\n";
	//full inventory
	ICharacter* hero = new Character("hero");
	hero->equip(new Ice());
	hero->equip(new Ice());
	hero->equip(new Cure());
	hero->equip(new Cure());
	AMateria* extra = new Ice();
	hero->equip(extra);
	delete extra;
	delete hero;
	std::cout << "\n";
	// Test unequip
	ICharacter* mage = new Character("mage");
	AMateria* ice = new Ice();
	mage->equip(ice);
	mage->unequip(0);
	delete ice;
	delete mage;
	std::cout << "\n";

	Character* original = new Character("original");
	original->equip(new Ice());
	Character* copy = new Character(*original);
	delete original;
	ICharacter* target = new Character("target");
	copy->use(0, *target);
	delete target;
	delete copy;

	return 0;
}