/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_search.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:16:12 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/04 16:17:39 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::search_function(int mode)
{
	if(mode == 0)
	{
		print_saved();
		std::cout << "you have chosen SEARCH option." << std::endl;
		std::cout << "you can give the index nuber of the contact you are looking for" << std::endl;
		std::cout << "dont forget, i can only save up to 8 contacts." << std::endl;
	}
	else if(mode == 1)
		std::cout << "i can only accept a single index and it should be between 1-8" << std::endl;
	else if(mode == 2)
		std::cout << "you have given an empty contact number " << std::endl;
	std::cout << "index: ";
	std::getline(std::cin, search_index);
	if(std::cin.eof() || std::cin.fail())
		exit(1);
	if(!exit_check(search_index))
		searching_step1(search_index);
	
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
		return true;
	return false;
}

void PhoneBook::print_all(char index)
{
	int integer_index = 0;
	integer_index = index - '1';
	check_contanct(integer_index);
	std::cout << std::setw(10);
	std::cout << std::right;
	std::cout << Contacts[integer_index].contact_index;
	std::cout << "|";
	print_all_2(Contacts[integer_index].get_info(0));
	print_all_2(Contacts[integer_index].get_info(1));
	print_all_2(Contacts[integer_index].get_info(2));
	std::cout << std::endl;
}

void PhoneBook::search_print(char index)
{
	int integer_index = 0;
	integer_index = index - '1';
	check_contanct(integer_index);
	std::cout << Contacts[integer_index].contact_index << std::endl;
	std::cout << Contacts[integer_index].get_info(0) << std::endl;
	std::cout << Contacts[integer_index].get_info(1) << std::endl;
	std::cout << Contacts[integer_index].get_info(2) << std::endl;
	std::cout << Contacts[integer_index].get_info(3) << std::endl;
	std::cout << Contacts[integer_index].get_info(4) << std::endl;
	phonebook_start(1);
}

void PhoneBook::check_contanct(int integer_index)
{
	if(Contacts[integer_index].get_info(0).empty())
		search_function(2);
}
void PhoneBook::searching_step1(std::string index)
{
	size_t len = index.length();
	if (len > 1 || len <= 0)
		search_function(1);
	else
	{
		if(index[0] <= '8' && index[0] > '0')
			search_print(index[0]);
		else
			search_function(1);
	}
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
