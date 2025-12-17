/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:38:49 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/17 18:55:18 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	DiamondTrap trap("TRAAAPP");
	trap.whoAmI();
	trap.Spec();
	trap.attack("samet");
	trap.Spec();
	return 0;
}