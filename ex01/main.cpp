/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:01:49 by sizgi             #+#    #+#             */
/*   Updated: 2025/10/29 15:22:20 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{	
	PhoneBook book;
	book.contact_number = -1;
	book.prompt_check(book.command, 0);
	
	return 0;
}