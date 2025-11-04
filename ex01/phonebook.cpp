/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:17:06 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/04 16:10:59 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::phonebook_start(int sam)
{
	if(sam == 0)
	{
		contact_number = -1;
		full = false;
		std::cout << "Hello! Im a Phonebook" << std::endl;
		std::cout << "You have 3 options too use" << std::endl;
		std::cout << "type \"ADD\" to save a new contact" << std::endl;
		std::cout << "type \"SEARCH\" to display a specific contact" << std::endl;
		std::cout << "type \"EXIT\" to close the program" << std::endl;
	}
	else
		std::cout << "OPTIONS:  \"ADD\" \"SEARCH\" \"EXIT\"" << std::endl;
	std::cout << "Option: ";
	std::getline(std::cin, user_option);
	if(std::cin.eof() || std::cin.fail())
		exit(1);
	option_check();
}

void PhoneBook::option_check(void)
{
	if(user_option == "ADD")
		option = ADD;
	else if(user_option == "SEARCH")
		option = SEARCH;
	else if(user_option == "EXIT")
		option = EXIT;
	else
		option = NONSENSE;

	option_select();
}

void PhoneBook::option_select(void)
{
	switch (option)
	{
		case (ADD):
			add_function();
			break;
		case (SEARCH):
			search_function(0);
			break;
		case (EXIT):
			exit_function();
			break;
		default:
			try_again_func();
			break;
	}
}

void PhoneBook::try_again_func(void)
{
	std::cout << "The input you gave was invalid." << std::endl;
	std::cout << "Please try again" << std::endl;
	std::cout << "option: ";
	std::getline(std::cin, user_option);
	if(std::cin.eof() || std::cin.fail())
		exit(1);
	option_check();
	option_select();
}

