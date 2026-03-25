/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:59:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/25 17:04:25 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

	BitcoinExchange::BitcoinExchange() {
		std::string line;
		bool firstLine = true;
		float value = 0.00;

		std::ifstream subjectFile("data.csv");
		if(!subjectFile.is_open())
			throw std::runtime_error("Could not open the data File!\n");
			
		while(getline(subjectFile, line)) {
			if (line.empty())
				continue;
			if(firstLine){
				firstLine = false;
				continue;
			}
			size_t tempPos = line.find(',');
			std::string date = line.substr(0, tempPos);
			std::string dateValue = line.substr(tempPos+1);
			std::istringstream iss(dateValue);
			iss >> value;
			myMap[date] = value;
		}
		for(std::map<std::string, float>::iterator i = myMap.begin(); i != myMap.end(); i++) {
			std::cout << i->first << " => " << i->second << std::endl;
		}
	}
	
	BitcoinExchange::~BitcoinExchange() {}
	BitcoinExchange::BitcoinExchange(const BitcoinExchange &) {}
	BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &) {
		return *this;
	}

	void BitcoinExchange::exchanger(const std::string &file) {
		std::ifstream givenFile(file.c_str());
		if(!givenFile.is_open())
			throw std::runtime_error("Could not open the data File!\n");
	}
	
	
	