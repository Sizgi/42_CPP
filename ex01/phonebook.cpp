/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:17:06 by sizgi             #+#    #+#             */
/*   Updated: 2025/10/29 18:19:15 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::prompt_check(std::string command, int sam)
{
	if(sam == 0)
	{
		std::cout << "Hello! Im a Phonebook" << std::endl;
		std::cout << "I have 3 options too use" << std::endl;
		std::cout << "type \"ADD\" to save a new contact" << std::endl;
		std::cout << "type \"SEARCH\" to display a specific contact" << std::endl;
		std::cout << "type \"EXIT\" to close the program" << std::endl;
	}
	std::cout << "option: ";
	std::getline(std::cin, command);
	
	option_check(command);
	option_select(command);
}

void PhoneBook::option_check(std::string command)
{
	if(command == "ADD")
		option = ADD;
	else if(command == "SEARCH")
		option = SEARCH;
	else if(command == "EXIT")
		option = EXIT;
	else
		option = NONSENSE;
}

void PhoneBook::option_select(std::string command)
{
	switch (option)
	{
		case (ADD):
			add_function();
			break;
		case (SEARCH):
			search_function();
			break;
		case (EXIT):
			exit_function();
			break;
		default:
			try_again_func(command);
			break;
	}
}

void PhoneBook::try_again_func(std::string command)
{
	std::cout << "The input you gave was invalid." << std::endl;
	std::cout << "Please try again" << std::endl;
	std::cout << "option: ";
	std::getline(std::cin, command);
	
	option_check(command);
	option_select(command);
}
