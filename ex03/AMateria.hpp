/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 14:55:13 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/26 17:38:11 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(void);
		~AMateria();
		AMateria(const AMateria &copy_from_this);
		AMateria(std::string const & type);
		AMateria &operator = (const AMateria &copy_from_this);
		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string mat_type;
};

// Implement the concrete classes for Materias: Ice and Cure. Use their names in low-
// ercase ("ice" for Ice, "cure" for Cure) to set their types. Of course, their member function
// clone() will return a new instance of the same type (i.e., if you clone an Ice Materia,
// you will get a new Ice Materia).
// The use(ICharacter&) member function will display:
// • Ice: "* shoots an ice bolt at <name> *"
// • Cure: "* heals <name>’s wounds *"


#endif