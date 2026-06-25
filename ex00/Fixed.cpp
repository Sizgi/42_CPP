/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:30:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/22 14:53:40 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : number(0)
{
	std::cout << "default constructer was here" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "destructer was here" << std::endl;
}

Fixed::Fixed(const Fixed &copy_from_this)
{
	std::cout << "copy constructer was here" << std::endl;
	*this = copy_from_this;
}

Fixed &Fixed::operator=(const Fixed &copy_from_this)
{
	std::cout << "Copy assignment operator was here" << std::endl;
	if(this != &copy_from_this)
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
