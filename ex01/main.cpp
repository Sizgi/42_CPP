/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:17:01 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/20 21:09:32 by sizgi            ###   ########.fr       */
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

cat1->setIdea(10, "samet");
std::cout << cat1->getIdea(10)+"\n";
std::cout << cat2->getIdea(10)+"\n\n\n";

*cat2 = *cat1;
std::cout << cat1->getIdea(10)+"\n";
delete cat1;
std::cout << cat2->getIdea(10)+"\n";
delete cat2;

return 0;
}