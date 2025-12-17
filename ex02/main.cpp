/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:31:28 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/16 15:57:58 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{	
	FragTrap samet("Samet");
	FragTrap sarah(samet);
	FragTrap thor("Thor");
	FragTrap loki("Loki");
	thor.attack("loki");
	thor = loki;
	thor.attack("loki");
	thor.highFive(0);
	return 0;
}