/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:49:21 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/14 15:38:52 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
#define __CONTACT_H__


#include "PhoneBook.hpp"

class Contact
{
	public:
		char 			contact_index;
		void 			set_info(int index, std::string info);
		std::string 	get_info(int index);
		Contact();
		~Contact();
	private:
		std::string 	first_name;
		std::string 	last_name;
		std::string 	nick_name;
		std::string 	phone_number;
		std::string 	darkest_secret;
};

#endif