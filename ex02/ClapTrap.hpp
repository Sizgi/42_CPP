/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:34 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 13:26:12 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>
#include <climits>

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string given_name);
		ClapTrap(const ClapTrap &copy_from_this);
		ClapTrap &operator = (const ClapTrap &copy_from_this);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
	protected:
		std::string	name;
		int			Hit_points;
		int			Energy_points;
		int			Attack_damage;

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