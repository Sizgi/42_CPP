/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:34 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/16 15:22:01 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		~ScavTrap();
		ScavTrap(std::string given_name);
		ScavTrap(const ScavTrap &copy_from_this);
		ScavTrap &operator = (const ScavTrap &copy_from_this);
		void guardGate(void);
	private:

};

#endif


/*
	Orthodox Canonical Form:
		- default constructor,
		- parameterized constructor
		- copy constructor
		- copy assignment operator
		- destructor
*/