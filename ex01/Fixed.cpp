/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:30:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/19 19:20:18 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "default constructer was here" << std::endl;
	number = 0; //actual value is number/(2^f_bits)
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
	if(this != &copy_from_this)// avoid self-assignment ?
		this->number = copy_from_this.number;
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

Fixed::Fixed(const int c_i)
{
	std::cout << "Int constructor was here" << std::endl;
	if(c_i > 8388607 || c_i < -8388608)
		std::cout << "parameter caused an overflow, results can be unexpected" << std::endl;
	number = c_i * 256;
}

Fixed::Fixed(const float c_f)
{
	std::cout << "Float constructor was here" << std::endl;
	if(c_f > 8388607.0 || c_f < -8388608.0)
		std::cout << "parameter caused an overflow, results can be unexpected" << std::endl;
	number = roundf((c_f * 256));
}
float Fixed::toFloat(void) const
{
	return ((float)number)/256;
	//convert the fixed-point value to a floating-point value.
}

int Fixed::toInt(void) const
{
	return number/256;
	//convert the fixed-point value to an integer value.
}

std::ostream &operator<<(std::ostream &falan, const Fixed &filan)
{
	return (falan << filan.toFloat());
}
