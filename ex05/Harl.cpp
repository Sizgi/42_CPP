/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:20:18 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/27 17:13:35 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// "DEBUG" level: Debug messages contain contextual information. They are mostly
// used for problem diagnosis.
// Example: "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-
// ketchup burger. I really do!"

// • "INFO" level: These messages contain extensive information. They are helpful for
// tracing program execution in a production environment.
// Example: "I cannot believe adding extra bacon costs more money. You didn’t put
// enough bacon in my burger! If you did, I wouldn’t be asking for more!"

// • "WARNING" level: Warning messages indicate a potential issue in the system.
// However, it can be handled or ignored.
// Example: "I think I deserve to have some extra bacon for free. I’ve been coming for
// years, whereas you started working here just last month."

// • "ERROR" level: These messages indicate that an unrecoverable error has occurred.
// This is usually a critical issue that requires manual intervention.
// Example: "This is unacceptable! I want to speak to the manager now."

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}
void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years, whereas you started working here just last month." << std::endl;
}
void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void	Harl::complain( std::string level )
{
	std::string falan[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*filan[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for(int i = 0; i < 4; i++)
	{
		if(falan[i] == level)
		{
			(this->*filan[i])();
			return;
		}
	}
	std::cout << "level not found!" << std::endl;
}
