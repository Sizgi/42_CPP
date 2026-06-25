/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:31:01 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/22 14:54:10 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

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
		int getRawBits(void) const;
		void setRawBits(const int raw);
};




#endif