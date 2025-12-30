/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:20:46 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/26 15:49:17 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <AMateria.hpp>

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

// The Character possesses an inventory of 4 slots, which means at most 4 Materias.
// The inventory is empty upon construction. They equip the Materias in the first empty
// slot they find, in the following order: from slot 0 to slot 3. If they try to add a Materia to
// a full inventory, or use/unequip a non-existent Materia, nothing should happen (but bugs
// are still forbidden). The unequip() member function must NOT delete the Materia!
// Handle the Materias your character leaves on the floor as you like.
// Save the addresses before calling unequip(), or anything else, but
// don’t forget that you have to avoid memory leaks.
// The use(int, ICharacter&) member function will have to use the Materia at the
// slot[idx], and pass the target parameter to the AMateria::use function.


// Your Character must have a constructor taking its name as a parameter. Any copy
// (using copy constructor or copy assignment operator) of a Character must be deep.
// During copy, the Materias of a Character must be deleted before the new ones are added
// to their inventory. Of course, the Materias must be deleted when a Character is destroyed.

#endif