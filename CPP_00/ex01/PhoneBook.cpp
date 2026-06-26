/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:17:06 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/15 17:28:45 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	// std::cout << "helloP\n";
	full = false;
	start = true;
	exit_used = false;
	option = START;
	contact_number = -1;
	saved_contact_number = 0;
	search_mode = 0;
}

PhoneBook::~PhoneBook()
{
	// std::cout << "goodbyeP" << std::endl;
}

void PhoneBook::phonebook_start()
{
	if(start)
	{
		start = false;
		std::cout << "Hello! Im a Phonebook" << std::endl;
		std::cout << "You have 3 options too use" << std::endl;
		std::cout << "type \"ADD\" to save a new contact" << std::endl;
		std::cout << "type \"SEARCH\" to display a specific contact" << std::endl;
		std::cout << "type \"EXIT\" to close the program" << std::endl;
	}
	else
		std::cout << "OPTIONS:  \"ADD\" \"SEARCH\" \"EXIT\"" << std::endl;
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

	if(contact_number < 0 && option == SEARCH)
	{
		std::cout << "There is no contact to search for." << std::endl;
		option = NONSENSE;
	}
}

int PhoneBook::option_select(void)
{
	if(option == ADD)
	{
		if(add_function())
			return (1);
	}
	else if (option == SEARCH)
		return(search_function(search_mode));
	else if (option == EXIT)
		exit_function();
	return(0);
}

int PhoneBook::set_contact_infos()
{
	int i;
	
	std::cout << "you have chosen ADD option." << std::endl;
	std::cout << "Empty fields are not allowed." << std::endl;
	for(i = 0; i < 5; i++)
	{
		promt_func(i);
		std::getline(std::cin, info);
		if(std::cin.eof() || std::cin.fail())
		{
			failed_prompts(6);
			return (1);
		}
		if(info_check(info, i))
		{
			--i;
			continue;
		}
		info_writer(info, i);
	}
	return(0);
}

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
	if(info.length() > 35)
	{
		failed_prompts(3);
		return true;
	}

	while(info[i])//ascii check
    {
        if ((unsigned char)info[i] > 127)
        {
            failed_prompts(5);
            return true;
        }
        i++;
    }
	
	i = 0;
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
			std::cout << "It is a phonebook not a story book, CUT IT SHORT!" << std::endl;
			break;
		case 4:
			std::cout << "Empty fields are not allowed." << std::endl;
			break;
		case 5:
            std::cout << "Only ASCII characters are allowed." << std::endl;
            break;
		case 6:
            std::cout << "\nA problem occurred while reading user prompt" << std::endl;
            break;
		default:
			break;
	}
}

int PhoneBook::add_function()
{	
	contact_number++;
	if(!full)
		saved_contact_number = contact_number;
	if(contact_number == 7)
		full = true;
	contact_number = contact_number % 8;
	// std::cout << contact_number << std::endl;
	if(set_contact_infos())
		return 1;
	return 0;
}

int PhoneBook::search_function(int mode)
{
	if(exit_used)
		return 0;
	if(mode == 0)
	{
		print_saved();
		std::cout << "you have chosen SEARCH option." << std::endl;
		std::cout << "you can give the index nuber of the contact you are looking for" << std::endl;
		std::cout << "dont forget, i can only save up to 8 contacts." << std::endl;
	}
	std::cout << "index: ";
	std::getline(std::cin, search_index);
	if(std::cin.eof() || std::cin.fail())
	{
		failed_prompts(6);
		return (1);
	}
	if(exit_check(search_index))
		return (0);
	search_mode = searching_step1(search_index);
	return (search_mode);
}

int PhoneBook::searching_step1(std::string index)
{
	size_t len = index.length();
	if (len > 1 || len <= 0)
	{
		std::cout << "i can only accept a single index and it should be between 1-8" << std::endl;
		return (2);
	}
	else
	{
		if(index[0] <= '8' && index[0] > '0')
		{
			if(search_print(index[0]))
			{
				std::cout << "you have given an empty contact number " << std::endl;
				return (2);
			}
		}
		else
		{
			std::cout << "i can only accept a single index and it should be between 1-8" << std::endl;
			return (2);
		}
	}
	return (0);
}

void PhoneBook::print_saved()
{
	int index = 0;
	
	while(index <= saved_contact_number)//Contacts[index].get_info(index)[0]
	{
		print_all(index + '1');
		index++;
	}
}

bool PhoneBook::exit_check(std::string search_index)
{
	if(search_index == "EXIT")
	{
		exit_function();
		return true;
	}
	return false;
}

void PhoneBook::print_all(char index)
{
	int integer_index = 0;
	integer_index = index - '1';
	std::cout << std::setw(10);
	std::cout << std::right;
	std::cout << Contacts[integer_index].contact_index;
	std::cout << "|";
	print_all_2(Contacts[integer_index].get_info(0));
	print_all_2(Contacts[integer_index].get_info(1));
	print_all_2(Contacts[integer_index].get_info(2));
	std::cout << std::endl;
}

int PhoneBook::search_print(char index)
{
	int integer_index = 0;
	integer_index = index - '1';
	if(check_contanct(integer_index))
		return 1;
	std::cout << Contacts[integer_index].contact_index << std::endl;
	std::cout << Contacts[integer_index].get_info(0) << std::endl;
	std::cout << Contacts[integer_index].get_info(1) << std::endl;
	std::cout << Contacts[integer_index].get_info(2) << std::endl;
	std::cout << Contacts[integer_index].get_info(3) << std::endl;
	std::cout << Contacts[integer_index].get_info(4) << std::endl;
	return (0);
}

bool PhoneBook::check_contanct(int integer_index)
{
	if(Contacts[integer_index].get_info(0).empty())
		return true;
	return false;
}

void PhoneBook::print_all_2(std::string str)
{
	std::string temp;
	size_t len = str.length();
	if(len > 10)
	{
		temp = str.substr(0,9)+".";
		std::cout << std::setw(10);
		std::cout << std::right;
		std::cout << temp + "|";
		return;
	}
	std::cout << std::setw(10);
	std::cout << std::right;
	std::cout << str;
	std::cout << "|";
}

int PhoneBook::exit_function()
{
	std::cout <<"Exiting Phonebook.\n";
	exit_used = true;
	return(0);
}
