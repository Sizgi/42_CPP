/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:42:24 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/02 20:01:47 by sizgi            ###   ########.fr       */
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
	std::cout <<"MateriaSource destructer was here\n";
}

void MateriaSource::learnMateria(AMateria *mat)
{
	for(int i = 0; i < 4; i++)
	{
		if(!l_materia[i])
		{
			l_materia[i] = mat->clone();
			return;
		}
	}
	std::cout << "you cant learn new materials anymore\n";
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
