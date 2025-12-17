/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:28 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/16 15:21:52 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{	
	ScavTrap samet("Samet");
	samet.guardGate();
	ScavTrap sarah(samet);
	ScavTrap thor("Thor");
	ScavTrap loki("Loki");
	thor.attack("loki");
	thor = loki;
	thor.attack("loki");
	return 0;
}