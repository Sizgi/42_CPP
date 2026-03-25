/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:59:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/25 16:12:23 by sizgi            ###   ########.fr       */
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

struct dateValue
{
	std::string date;
	float fValue;
	unsigned int iValue;
	float fCount;
	unsigned int iCount;
};

class BitcoinExchange {
	public:
	BitcoinExchange();
	~BitcoinExchange();
	void exchanger(const std::string &givenFile);
	
	private:
	BitcoinExchange(const BitcoinExchange &copyThis);
	BitcoinExchange &operator=(const BitcoinExchange &copyThis);
	std::map<std::string, float> myMap;
};