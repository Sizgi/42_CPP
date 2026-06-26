/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:03:57 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/25 16:05:39 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"


class Character : public ICharacter
{
	public:
		Character(void);
		~Character();
		Character(const std::string &given_name);
		Character(const Character &copy_from_this);
		Character &operator=(const Character &copy_from_this);
		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

	private:
		std::string name;
		AMateria *inventory[4];
		// MateriaSource m_source;
};


#endif