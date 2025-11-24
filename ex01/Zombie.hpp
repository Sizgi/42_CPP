/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:49:02 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/10 17:24:12 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie
{
	public:
		void 	announce(void);
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	set_name(std::string zombie);
	
	private:
	std::string name;
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);
Zombie *zombieHorde( int N, std::string name );

#endif