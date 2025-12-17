/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:41:27 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/16 16:52:45 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
	DiamondTrap(void);
	~DiamondTrap();
	DiamondTrap(std::string given_name);
	DiamondTrap(const DiamondTrap &copy_from_this);
	DiamondTrap &operator=(const DiamondTrap &copy_from_this);
	void whoAmI(void);
	
	private:
		std::string name;
};


#endif