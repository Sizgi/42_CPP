/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:52:58 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/11 16:46:28 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &tip);
		void attack();
		void setNameA(std::string name);
		std::string getNameA();
		~HumanA();

	private:
		std::string name;
		Weapon &As_weapon;
};




#endif