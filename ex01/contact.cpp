/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:51:58 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/03 18:20:41 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void 			Contact::set_info(int index, std::string info)
{
			switch (index)
			{
				case 0:
					first_name = info;
					break;
				case 1:
					last_name = info;
					break;
				case 2:
					nick_name = info;
					break;
				case 3:
					phone_number = info;
					break;
				case 4:
					darkest_secret = info;
					break;
				default:
					break;
			}
}

std::string 	Contact::get_info(int index)
{
	switch (index)
	{
		case 0:
			return first_name;
		case 1:
			return last_name;
		case 2:
			return nick_name;
		case 3:
			return phone_number;
		case 4:
			return darkest_secret;
		default:
			return "";
	}
}
