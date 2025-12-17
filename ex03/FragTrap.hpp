/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:34 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/17 19:13:08 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FragTrap_HPP__
#define __FragTrap_HPP__

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		~FragTrap();
		FragTrap(std::string given_name);
		FragTrap(const FragTrap &copy_from_this);
		FragTrap &operator = (const FragTrap &copy_from_this);
		void highFive(int i);
	protected:
		// int			Hit_points;
		// int			Attack_damage;
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