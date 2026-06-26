/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:55:28 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/25 16:06:38 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure") // AMateria()
{
	std::cout << "\033[1;32mCure\033[0m default constructor \033[1;34mconstructed\033[0m a Cure.\n";
}

Cure::~Cure()
{
	std::cout << "\033[1;32mCure\033[0m default destructor \033[1;31mdestructed\033[0m a Cure.\n";
}

Cure::Cure(std::string const &type) : AMateria(type)
{
	std::cout << "\033[1;32mCure\033[0m parameterized constructor \033[1;34mconstructed\033[0m a Cure.\n";
}

Cure::Cure(const Cure &copy_from_this) : AMateria(copy_from_this)
{
	std::cout << "\033[1;32mCure\033[0m copy constructor \033[1;34mconstructed\033[0m a Cure.\n";
}

Cure &Cure::operator = (const Cure &copy_from_this)
{
	if(this != &copy_from_this)
		AMateria::operator=(copy_from_this);
	std::cout << "\033[1;32mCure\033[0m Copy assignment operator \033[1;34massigned\033[0m a Cure.\n";
	return *this;
}

Cure *Cure::clone() const
{
	Cure *n_cure = new Cure(*this);
	return n_cure;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

