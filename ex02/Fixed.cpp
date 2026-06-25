/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:30:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/22 18:22:03 by sizgi            ###   ########.fr       */
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
// Operation functions always has "this" as the left operand and we are basicly adding the right operand(parameter)

////////////// The 6 comparison operators: >, <, >=, <=, ==, and != //////////////
bool Fixed::operator<(const Fixed &other) const
{
	return(this->number < other.number);
}
bool Fixed::operator<=(const Fixed &other) const
{
	return(this->number <= other.number);
}
bool Fixed::operator>(const Fixed &other) const
{
	return(this->number > other.number);
}
bool Fixed::operator>=(const Fixed &other) const
{
	return(this->number >= other.number);
}
bool Fixed::operator==(const Fixed &other) const
{
	return(this->number == other.number);
}
bool Fixed::operator!=(const Fixed &other) const
{
	return(this->number != other.number);
}
////////////// The 6 comparison operators: >, <, >=, <=, ==, and != //////////////

////////////// The 4 arithmetic operators: +, -, *, and /. //////////////
Fixed Fixed::operator+(const Fixed &second) const
{
	Fixed both;
	long temp = static_cast<long>(this->number) + second.number;
	if (temp > INT_MAX || temp < INT_MIN)
		std::cout << "parameter caused an overflow, results can be unexpected" << std::endl;
	both.setRawBits(this->number + second.number);
	return(both);
}
Fixed Fixed::operator-(const Fixed &second) const
{
	long temp = static_cast<long>(this->number) - second.number;
	if (temp > INT_MAX || temp < INT_MIN)
		std::cout << "parameter caused an overflow, results can be unexpected" << std::endl;
	Fixed both;
	both.setRawBits(this->number - second.number);
	return(both);
}
Fixed Fixed::operator*(const Fixed &second) const
{
	long temp = static_cast<long>(this->number) * second.number;
	temp = temp/256;
	if (temp > INT_MAX || temp < INT_MIN)
		std::cout << "parameter caused an overflow, results can be unexpected" << std::endl;
	Fixed both;
	both.setRawBits((this->number * second.number) / 256);
	return(both);
}
Fixed Fixed::operator/(const Fixed &second) const
{
	Fixed both;
	long temp = static_cast<long>(this->number) / second.number;
	temp = temp*256;
	if (temp > INT_MAX || temp < INT_MIN)
		std::cout << "parameter caused an overflow, results can be unexpected" << std::endl;
	both.setRawBits((this->number * 256) / second.number);
	return(both);
}
////////////// The 4 arithmetic operators: +, -, *, and /. //////////////

////////////// The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators //////////////
Fixed &Fixed::operator++(void)
{
	if (this->number == INT_MAX)
		std::cout << "parameter caused an overflow, results can be unexpected" << std::endl;

	this->number += 1;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed clone;
	clone = *this;
	if (this->number == INT_MAX)
		std::cout << "parameter caused an overflow, results can be unexpected" << std::endl;
	this->number += 1;
	return(clone);
}

Fixed &Fixed::operator--(void)
{
	if (this->number == INT_MIN)
		std::cout << "parameter caused an overflow, results can be unexpected" << std::endl;
	this->number -= 1;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed clone;
	if (this->number == INT_MIN)
		std::cout << "parameter caused an overflow, results can be unexpected" << std::endl;
	clone = *this;
	this->number -= 1;
	return(clone);
}
////////////// The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators //////////////

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	return (first > second) ? first : second;
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	return (first < second) ? first : second;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	return (first > second) ? first : second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	return (first < second) ? first : second;
}
