/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:42:24 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/30 20:07:25 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::~MateriaSource()
{
	std::cout <<"MateriaSource destructer was here\n";
}

void MateriaSource::learnMateria(AMateria *)
{
	
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < 4; i++)
	{
		if(type == l_materia[i]->getType())
		{
			return(AMateria(*l_materia[i]));
		}
	}
	return
}


