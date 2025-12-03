/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:31:01 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/03 17:14:02 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed
{
	private:

		int number;
		static const int f_bits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy_from_this);
		Fixed &operator = (const Fixed &copy_from_this);
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		Fixed(const int c_i);
		Fixed(const float c_f);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator<(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		Fixed operator+(const Fixed &fist) const;
		Fixed operator-(const Fixed &fist) const;
		Fixed operator*(const Fixed &fist) const;
		Fixed operator/(const Fixed &fist) const;
		Fixed &operator++(void);
		Fixed operator++(int dummy);
		Fixed &operator--(void);
		Fixed operator--(int dummy);
		static Fixed &min(Fixed &first, Fixed &second);
		static Fixed &max(Fixed &first, Fixed &second);
		const static Fixed &max(const Fixed &first, const Fixed &second);
		const static Fixed &min(const Fixed &first, const Fixed &second);
};
// static Fixed &Fixed::max(Fixed first, Fixed second)
// {
	
// }

std::ostream &operator<<(std::ostream &falan, const Fixed &filan);



#endif