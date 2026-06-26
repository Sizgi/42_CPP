/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:33:58 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/21 13:37:53 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	if (N < 1 || N > 100)
	{
		std::cout << "number is too big or too small give something between 0-100" << std::endl;
		return NULL;
	}
	Zombie *zombies = new Zombie[N];
	
	for(int count = 0; count < N; count++)
		zombies[count].set_name(name);
	return(zombies);
}