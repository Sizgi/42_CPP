/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:30:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/22 18:15:00 by sizgi            ###   ########.fr       */
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
	std::cout<<"copy constructer was here"<<std::endl;
	*this = copy_from_this;
}

Fixed &Fixed::operator=(const Fixed &copy_from_this)
{
	std::cout<<"Copy assignment operator was here"<<std::endl;
	if(this != &copy_from_this)
		this->number = copy_from_this.number;
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	number = raw;
	std::cout << "set func used" << std::endl;
}

int Fixed::getRawBits(void) const
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
	if(c_f > 8388607.0)
		std::cout << "numbers bigger than 8388607.0 can cause overflow, results can be unexpected" << std::endl;
	else if(c_f < -8388608.0)
		std::cout << "parameter caused an overflow, results can be unexpected" << std::endl;
	number = roundf((c_f * 256));
}

float Fixed::toFloat(void) const
{
	return ((float)number)/256;
}

int Fixed::toInt(void) const
{
	return number/256;
}

std::ostream &operator<<(std::ostream &falan, const Fixed &filan)
{
	return (falan << filan.toFloat());
}
