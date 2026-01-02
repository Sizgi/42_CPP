/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:55:28 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/02 19:50:39 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure") // AMateria()
{
	//mat_type = "cure";
	std::cout << "\033[1;32mCure\033[0m default constructer \033[1;34mconstructed\033[0m a Cure.\n";
}

Cure::~Cure()
{
	std::cout << "\033[1;32mCure\033[0m default destructer \033[1;31mdestructed\033[0m a Cure.\n";
}

Cure::Cure(std::string const &type) : AMateria(type)
{
	// mat_type = type;
	std::cout << "\033[1;32mCure\033[0m parameterized constructer \033[1;34mconstructed\033[0m a Cure.\n";
}

Cure::Cure(const Cure &copy_from_this) : AMateria(copy_from_this)
{
	std::cout << "\033[1;32mCure\033[0m copy constructer \033[1;34mconstructed\033[0m a Cure.\n";
}

Cure &Cure::operator = (const Cure &copy_from_this)
{
	if(this != &copy_from_this)
		AMateria::operator=(copy_from_this);
		//this->mat_type = copy_from_this.mat_type;
	std::cout << "\033[1;32mCure\033[0m Copy assignment operator \033[1;34massigned\033[0m a Cure.\n";
	return *this;
}

/* std::string const &Cure::getType() const
{
	return mat_type;
} //Returns the materia type */

Cure *Cure::clone() const
{
	Cure *n_cure = new Cure(*this);
	return n_cure;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

