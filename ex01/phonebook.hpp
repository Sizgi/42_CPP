/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:19:11 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/04 16:24:18 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include "contact.hpp"

class PhoneBook
{
	public:
		enum 			OptionType
		{
			ADD,
			SEARCH,
			EXIT,
			NONSENSE
		};
		void 			phonebook_start(int sam);

	private:
		Contact 		Contacts[8];
		std::string 	search_index;
		std::string 	user_option;
		std::string 	info;
		OptionType 		option;
		int 			contact_number;
		int 			saved_contact_number;
		bool			full;
		void 			option_check(void);
		void 			option_select(void);
		void 			try_again_func(void);
		void 			add_function();
		bool 			info_check(std::string something, int info_code);
		void 			info_writer(std::string info, int i);
		void 			set_contact_infos();
		void 			promt_func(int i);
		void 			failed_prompts(int code);
		void 			search_function(int mode);
		void 			print_saved(void);
		void 			searching_step1(std::string something);
		void 			print_all(char index);
		void 			print_all_2(std::string str);
		void 			check_contanct(int integer_index);
		void 			search_print(char index);
		bool 			exit_check(std::string search_index);
		int				exit_function();
};

#endif