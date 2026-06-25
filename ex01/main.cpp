/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:01:49 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/15 17:07:51 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{	
	PhoneBook book;
	int check = 0;
	
	while(1)
	{
		if(check == 0)
		{
			book.phonebook_start();
			std::cout << "Option: ";
			std::getline(std::cin, book.user_option);
			if(std::cin.eof() || std::cin.fail())
			{
				book.failed_prompts(6);
				return (1);
			}
			book.option_check();
			if(book.option == book.NONSENSE)
				continue;
		}
		check = book.option_select();
		if(check == 1)
			return (1);
		else if(check == 2)
			continue;
		if(book.exit_used)
			break;
	}
	return 0;
}
