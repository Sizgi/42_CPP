/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:55:23 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/19 19:04:33 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructer constructed a brain\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructer destructed a brain\n";
}

Brain::Brain(const Brain &copy_from_this)
{
	std::cout << "Brain copy constructer constructed a brain\n";
}

Brain &Brain::operator=(const Brain &copy_from_this)
{
	std::cout << "Copy assignment operator was here\n"
}

