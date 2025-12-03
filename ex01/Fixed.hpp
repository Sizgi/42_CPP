/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:31:01 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/02 19:23:37 by sizgi            ###   ########.fr       */
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
		// And add the following function to the Fixed class files:
		// An overload of the insertion («) operator that inserts a floating-point representation
		// of the fixed-point number into the output stream object passed as a parameter.
		
};

std::ostream &operator<<(std::ostream &falan, const Fixed &filan);



#endif