/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:59:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/04 17:23:40 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iomanip>

#define RED		"\033[31m"
#define WARN	"\033[3;91m"
#define WARN2	"\033[3;92m"
#define WARN3	"\033[3;93m"
#define WARN4	"\033[3;94m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define MAGENT	"\033[35m"
#define CYAN	"\033[36m"
#define GRAY	"\033[90m"
#define BG		"\033[105m"
#define RESET	"\033[0m"


class BitcoinExchange {
	public:
	BitcoinExchange();
	~BitcoinExchange();
	void exchanger(const std::string &givenFile);
	
	private:
	BitcoinExchange(const BitcoinExchange &copyThis);
	BitcoinExchange &operator=(const BitcoinExchange &copyThis);
	std::map<std::string, double> myMap;
	void	valueCalculation(std::string line);
};