/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:42:24 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/25 16:20:27 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria *mat);
		AMateria* createMateria(std::string const &type);
		MateriaSource(const MateriaSource &copy_from_this);
		MateriaSource &operator=(const MateriaSource &copy_from_this);
		
	private:
		AMateria *l_materia[4];
};


#endif