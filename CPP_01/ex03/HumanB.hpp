/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:10:49 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/21 14:01:57 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class HumanB
{
	public:
		void attack();
		void setWeapon(Weapon &weapon);
		void setNameB(std::string n);
		std::string getNameB(void);
		HumanB(std::string n);
		~HumanB();
	private:	
		std::string name;
		Weapon *Bs_weapon;
};

#endif