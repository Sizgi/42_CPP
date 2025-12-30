/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 14:55:13 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/30 19:23:54 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria(void)
{
	mat_type = "a material";
	std::cout << "\033[1;33mAMateria\033[0m default constructer 033[1;34mconstructed\033[0m a AMateria.\n";
}

AMateria::~AMateria()
{
	std::cout << "\033[1;33mAMateria\033[0m default constructer 033[1;31mdestructed\033[0m a AMateria.\n";
}

AMateria::AMateria(std::string const &type)
{
	mat_type = type;
	std::cout << "\033[1;33mAMateria\033[0m parameterized constructer 033[1;34mconstructed\033[0m a AMateria.\n";
}

AMateria::AMateria(const AMateria &copy_from_this)
{
	*this = copy_from_this;
	std::cout << "\033[1;32mAMateria\033[0m copy constructer 033[1;34mconstructed\033[0m a AMateria.\n";
}

AMateria &AMateria::operator = (const AMateria &copy_from_this)
{
	if(this != &copy_from_this)
		this->mat_type = copy_from_this.mat_type;
	std::cout << "\033[1;32mAMateria\033[0m Copy assignment operator 033[1;34massigned\033[0m a AMateria.\n";
	return *this;
}

std::string const &AMateria::getType() const //Returns the materia type
{
	return mat_type;
}

//  virtual AMateria* clone() const = 0;
void AMateria::use(ICharacter &target)
{
	
}
