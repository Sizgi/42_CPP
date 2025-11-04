/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_add.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:15:07 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/04 16:12:26 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::info_writer(std::string info, int i)
{
	
	switch (i)
	{
	case 0:
		{
			Contacts[contact_number].set_info(i, info);
			Contacts[contact_number].contact_index = contact_number + '1';
		}
		break;
	case 1:
			Contacts[contact_number].set_info(i, info);
		break;
	case 2:
			Contacts[contact_number].set_info(i, info);
		break;
	case 3:
			Contacts[contact_number].set_info(i, info);
		break;
	case 4:
			Contacts[contact_number].set_info(i, info);
		break;
	default:
		break;
	}	
}

void PhoneBook::set_contact_infos()
{
	int i;
	
	std::cout << "you have chosen ADD option." << std::endl;
	std::cout << "Empty fields are not allowed." << std::endl;
	for(i = 0; i < 5; i++)
	{
		promt_func(i);
		std::getline(std::cin, info);
		if(std::cin.eof() || std::cin.fail())
			exit(1);
		if(info_check(info, i))
		{
			--i;
			continue;
		}
		info_writer(info, i);
	}
	phonebook_start(1);
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
		failed_prompts(0);
		return true;
	}
	while(info[i])
	{
		if(info_code < 2 && (std::isdigit(info[i]) || std::isspace(info[i])))
		{
			failed_prompts(1);
			return true;
		}
		if(info_code == 3 && !std::isdigit(info[i]))
		{
			failed_prompts(2);
			return true;
		}
		i++;
	}
	return false;
}

void PhoneBook::failed_prompts(int code)
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
	contact_number++;
	if(!full)
		saved_contact_number = contact_number;
	if(contact_number == 7)
		full = true;
	contact_number = contact_number % 8;
	std::cout << contact_number << std::endl;
	set_contact_infos();
}
