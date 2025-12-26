/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:55:23 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/23 16:56:23 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for(int i = 0; i < 100; i++)
		ideas[i] = "empty";
	std::cout << "Brain constructer constructed a brain\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructer destructed a brain\n";
}

Brain::Brain(const Brain &copy_from_this)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy_from_this.ideas[i];
	std::cout << "Brain copy constructer constructed a brain\n";
}

Brain &Brain::operator=(const Brain &copy_from_this)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy_from_this.ideas[i];
	std::cout << "Brain Copy assignment operator was here\n";
	return *this;
}

