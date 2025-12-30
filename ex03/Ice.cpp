/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 17:39:37 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/30 15:53:02 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	mat_type = "ice";
	std::cout << "\033[1;36mIce\033[0m default constructer 033[1;34mconstructed\033[0m a Ice.\n";
}

Ice::~Ice()
{
	std::cout << "\033[1;36mIce\033[0m default destructer \033[1;31mdestructed\033[0m a Ice.\n";
}

Ice::Ice(std::string const &type) : AMateria(type)
{
	// mat_type = type;
	std::cout << "\033[1;36mIce\033[0m parameterized constructer 033[1;34mconstructed\033[0m a Ice.\n";
}

Ice::Ice(const Ice &copy_from_this) : AMateria(copy_from_this)
{
	std::cout << "\033[1;36mIce\033[0m copy constructer 033[1;34mconstructed\033[0m a Ice.\n";
}

Ice &Ice::operator = (const Ice &copy_from_this)
{
	if(this != &copy_from_this)
		this->mat_type = copy_from_this.mat_type;
	std::cout << "\033[1;36mIce\033[0m Copy assignment operator 033[1;34massigned\033[0m a Ice.\n";
	return *this;
}

std::string const &Ice::getType() const
{
	return mat_type;
} //Returns the materia type

Ice *Ice::clone() const
{
	
}
void use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

