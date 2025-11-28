/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:30:35 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/28 14:57:40 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "default ettik" << std::endl;
	number = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "deconstructed" << std::endl;
}

Fixed::Fixed(const Fixed &copy_from_this)
{
	*this = copy_from_this; //method to // copy all values from copy_this
	//BSP: Fixed a(b) => this is a fixed object a with the infos of b;
}

Fixed &Fixed::operator=(const Fixed &copy_from_this)
{
	if(this != &copy_from_this)// avoid self-assignment ?
		this->number = copy_from_this.number;
	return *this;
}
