/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_add.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:15:07 by sizgi             #+#    #+#             */
/*   Updated: 2025/10/29 18:35:24 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::info_writer(std::string info, int i, int contact_number)
{
	
	switch (i)
	{
	case 0:
		Contacts[contact_number].first_name = info;
		break;
	case 1:
		Contacts[contact_number].last_name = info;
		break;
	case 2:
		Contacts[contact_number].nick_name = info;
		break;
	case 3:
		Contacts[contact_number].phone_number = info;
		break;
	case 4:
		Contacts[contact_number].darkest_secret = info;
		break;
	default:
		break;
	}	
}

void PhoneBook::set_contact_infos()
{
	int i;
	bool check = false;
	
	std::wcout << "you have chosen ADD option." << std::endl;
	std::wcout << "Empty fields are not allowed." << std::endl;
	for(i = 0; i < 5; i++)
	{
		if(check == true)
			--i;
		promt_func(i);
		std::getline(std::cin, info);
		if(info_check(info, i))
		{
			check = true;
			continue;
		}
		else
			check = false;
		info_writer(info, i, contact_number);
	}
	prompt_check(command, 1);
}

void PhoneBook::promt_func(int i)
{
	switch (i)
	{
	case 0:
		std::cout << "first name: ";
		break;
	case 1:
		std::cout << "last name: ";
		break;
	case 2:
		std::cout << "nick name: ";
		break;
	case 3:
		std::cout << "phone number: ";
		break;
	case 4:
		std::cout << "darkest secret: ";
		break;
	default:
		break;
	}
}

bool PhoneBook::info_check(std::string info, int info_code)
{
	int i = 0;
	if(info.empty())
	{
		fail_prompts(0);
		return true;
	}
	while(info[i])
	{
		if(info_code < 2 && (std::isdigit(info[i]) || std::isspace(info[i])))
		{
			fail_prompts(1);
			return true;
		}
		if(info_code == 3 && !std::isdigit(info[i]))
		{
			fail_prompts(2);
			return true;
		}
		i++;
	}
	return false;
}

void PhoneBook::fail_prompts(int code)
{
	switch (code)
	{
		case 0:
			std::cout << "Empty fields are not allowed." << std::endl;
			break;
		case 1:
			std::cout << "only one word is acceptable and numbers are not allowed." << std::endl;
			break;
		case 2:
			std::cout << "Only numbers are allowed." << std::endl;
			break;
		case 3:
			std::cout << "Empty fields are not allowed." << std::endl;
			break;
		case 4:
			std::cout << "Empty fields are not allowed." << std::endl;
			break;
		default:
			break;
	}
}

void PhoneBook::add_function()
{
	bool full = false;
	contact_number++;
	if(overload_switch == 0)
		saved_contact_number = contact_number;
	if(contact_number == 7)
		overload_switch = 
	contact_number = contact_number % 8;
	std::cout << contact_number << std::endl;
	set_contact_infos();
}
