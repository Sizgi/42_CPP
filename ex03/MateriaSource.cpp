/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:42:24 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/25 16:37:20 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		l_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if(l_materia[i])
			delete l_materia[i];
	}
	std::cout <<"MateriaSource destructor was here\n";
}

void MateriaSource::learnMateria(AMateria *mat)
{
	for(int i = 0; i < 4; i++)
	{
		if(!l_materia[i])
		{
			l_materia[i] = mat->clone();
			delete mat;
			return;
		}
	}
	std::cout << "you cant learn new materials anymore\n";
	delete mat;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < 4; i++)
	{
		if(l_materia[i])
		{
			if(type == l_materia[i]->getType())
				return(l_materia[i]->clone());
		}
	}
	std::cout << type << " is an unknown material.\n";
	return 0;
}


MateriaSource::MateriaSource(const MateriaSource &copy_from_this)
{
	for(int i = 0; i < 4; i++)
		this->l_materia[i] = NULL;
	*this = copy_from_this;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &copy_from_this)
{
	if(this != &copy_from_this)
	{
		for(int i = 0; i < 4; i++)
		{
			if(this->l_materia[i])
			{
				delete this->l_materia[i];
				this->l_materia[i] = NULL;
			}
			if(copy_from_this.l_materia[i])
				this->l_materia[i] = copy_from_this.l_materia[i]->clone();
		}
	}
	std::cout <<"MateriaSource assignment operator was here\n";
	return *this;
}

