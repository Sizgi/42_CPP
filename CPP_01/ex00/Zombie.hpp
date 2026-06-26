/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:49:02 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/19 15:16:18 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie
{
	public:
		void 	announce(void);
		Zombie(std::string name);
		~Zombie();
	
	private:
		std::string name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif