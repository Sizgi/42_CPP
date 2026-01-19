/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:56:50 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/19 16:07:02 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(1000, "Arthas");
	if (horde == NULL)
		return 1;
	for(int counter = 0; counter < 1000; counter++)
		horde[counter].announce();
	delete[] horde;
	return 0;
}