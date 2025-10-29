/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:02:45 by sizgi             #+#    #+#             */
/*   Updated: 2025/10/21 18:13:58 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MEGAPHONE_H__
#define __MEGAPHONE_H__


#include <iostream>
#include <ctype.h>
#include <cstdlib>

class MegaPhone
{
	public:
		std::string str;
		void str_func(std::string word);
};

#endif