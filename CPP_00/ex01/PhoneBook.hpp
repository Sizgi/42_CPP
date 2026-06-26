/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:19:11 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/15 17:27:19 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	public:
		enum 			OptionType
		{
			ADD,
			SEARCH,
			EXIT,
			NONSENSE,
			START
		};

		void			phonebook_start(void);
		void 			option_check(void);
		int 			option_select(void);
		void 			failed_prompts(int code);
		OptionType 		option;
		std::string 	user_option;
		bool			exit_used;
		PhoneBook();
		~PhoneBook();

	private:
		Contact 		Contacts[8];
		std::string 	search_index;
		std::string 	info;
		int 			contact_number;
		int 			saved_contact_number;
		bool			full;
		bool			start;
		int				search_mode;
		int 			add_function();
		int 			set_contact_infos();
		bool 			info_check(std::string something, int info_code);
		void 			info_writer(std::string info, int i);
		void 			promt_func(int i);
		int 			search_function(int mode);
		void 			print_saved(void);
		int 			searching_step1(std::string something);
		void 			print_all(char index);
		void 			print_all_2(std::string str);
		bool 			check_contanct(int integer_index);
		int 			search_print(char index);
		bool 			exit_check(std::string search_index);
		int				exit_function();
};

#endif