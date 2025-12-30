/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:03:57 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/30 19:46:40 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class Character : public ICharacter
{
	public:
	Character(void);
	Character(const Character &copy_from_this);
	~Character();
	std::string const & getName() const;
	void equip(AMateria *m) = 0;
	void unequip(int idx) = 0;
	void use(int idx, ICharacter &target) = 0;

	private:
		std::string name;
		AMateria *inventory[4];
		MateriaSource m_source;
};


#endif