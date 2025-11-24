/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:10:49 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/12 14:09:59 by sizgi            ###   ########.fr       */
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
		std::string getWeapon();
		void setNameB(std::string n);
		std::string getNameB(void);
		HumanB(std::string n);
		~HumanB();
	private:	
		std::string name;
		Weapon *Bs_weapon;
};

#endif