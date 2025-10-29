/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:19:11 by sizgi             #+#    #+#             */
/*   Updated: 2025/10/29 18:30:42 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include <cctype>

// HOLDS THE INFOS ABOUT CONTACTS
// MOSTLY PRIVATE?
class Contact
{
	public:
		
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;

		
		void set_random(int number)
		{
			random = number;
		}
		
		int get_random()
		{
			return random;
		}
	private:
		int random;
};


//HOLDS THE CONTACTS, COMMUNICATE WITH THE USER
//HAS ADD, SEARCH, EXIT FUNCS.
class PhoneBook
{
	//HOLDS THE CONTACTS, COMMUNICATE WITH THE USER
	public:
		enum OptionType
		{
			ADD,
			SEARCH,
			EXIT,
			NONSENSE,
		};
		// std::string option;
		std::string command;
		std::string info;
		OptionType option;
		Contact Contacts[8];
		int contact_number;
		int saved_contact_number;
		void option_check(std::string something);
		void option_select(std::string something);
		void prompt_check(std::string something, int sam);
		void try_again_func(std::string something);
		void info_writer(std::string info, int i, int contact_number);
		bool info_check(std::string something, int info_code);
		void fail_prompts(int code);
		void promt_func(int i);
		void return_to_promt();
		void set_contact_infos();
		void add_function();
		void search_function();
		
		void exit_function();
	// private:
};



#endif