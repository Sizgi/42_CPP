/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:33:58 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/10 17:23:58 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	int count;
	Zombie *zombies = new Zombie[N];
	
	for(count = 0; count < N; count++)
		zombies[count].set_name(name);
	return(zombies);
}