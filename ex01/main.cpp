/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:56:50 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/10 17:28:26 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int counter;
	Zombie *horde = zombieHorde(10, "Arthas");
	for(counter = 0; counter < 10; counter++)
		horde[counter].announce();
	delete[] horde;
}