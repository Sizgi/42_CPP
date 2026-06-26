/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:55:23 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/25 15:46:40 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for(int i = 0; i < 100; i++)
		ideas[i] = "empty";
	std::cout << "Brain constructor constructed a brain\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor destructed a brain\n";
}

Brain::Brain(const Brain &copy_from_this)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy_from_this.ideas[i];
	std::cout << "Brain copy constructor constructed a brain\n";
}

Brain &Brain::operator=(const Brain &copy_from_this)
{
	std::cout << "Brain assignment operator was here\n";
	if(this != &copy_from_this)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = copy_from_this.ideas[i];
	}
	return *this;
}

