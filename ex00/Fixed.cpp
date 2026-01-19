/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:30:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/19 18:56:39 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "default constructer was here" << std::endl;
	number = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "destructer was here" << std::endl;
}

Fixed::Fixed(const Fixed &copy_from_this)
{
	std::cout << "copy constructer was here" << std::endl;
	*this = copy_from_this; //method to // copy all values from copy_this
	//BSP: Fixed a(b) => this is a fixed object a with the infos of b;
}

Fixed &Fixed::operator=(const Fixed &copy_from_this)
{
	std::cout << "Copy assignment operator was here" << std::endl;
	if(this != &copy_from_this)// avoid self-assignment
		this->number = copy_from_this.getRawBits();
	return *this;
}

void Fixed::setRawBits( int const raw )
{
	number = raw;
	std::cout << "set func used" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "get func used" << std::endl;
	return number;
}
