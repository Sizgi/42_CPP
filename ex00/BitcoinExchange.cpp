/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:59:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/06/10 13:30:44 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static std::string  toLowerFunction(std::string &str) {
	size_t size = str.size();
	std::string temp = str;
	for(size_t s = 0; s < size; s++) {
		temp[s] = std::tolower((static_cast<unsigned int>(str[s])));
	}
	return temp;
}

static bool isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int maxDaysInMonth(int month, int year) {
	int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if(month == 2 && isLeapYear(year))
		return 29;
	return (days[month - 1]);
}

static bool dateCheck(std::string date) {
	int day = std::atoi((date.substr(8, 2)).c_str());
	int month = std::atoi((date.substr(5, 2)).c_str());
	int year = std::atoi((date.substr(0, 4)).c_str());
	
	if(month < 1 || month > 12)
		return false;
	if(year < 1)
		return false;
	if(day < 1 || day > maxDaysInMonth(month, year))
		return false;
	return true;
}

static bool	formatCheck(const std::string &date) {
	for(int i = 0; i < 10; ++i) {
		if(i == 4 || i == 7) {
			if(date[i] != '-')
				return false;
		}
		else if(!std::isdigit(static_cast<unsigned char>(date[i])))
			return false;
	}
	if(!dateCheck(date))
		return false;
	return true;
}

BitcoinExchange::BitcoinExchange() {
	std::string line;
	bool anyLine = false;
	bool firstLine = true;
	double value = 0.00;
	size_t pos = 0;
	std::string tempStr;
	std::ifstream subjectFile("data.csv");
	
	if(!subjectFile.is_open())
		throw std::runtime_error("Error: Could not open the data File!");
	while(getline(subjectFile, line)) {
		if (line.empty())
			continue;
		if(firstLine) {
			tempStr = toLowerFunction(line);
			pos = tempStr.find("date");
			if(pos == std::string::npos)
				throw std::invalid_argument("Error: Wrong format in data file, valid format: \"date,exchange_rate\"");
			if(tempStr.substr(pos, 18) != "date,exchange_rate")
				throw std::invalid_argument("Error: Wrong format in data file, valid format: \"date,exchange_rate\"");
			firstLine = false;
			continue;
		}
		anyLine = true;
		tempStr = line.substr(0, 10);
		if(!formatCheck(tempStr))
			throw std::invalid_argument("Error: Wrong format in data file(date)");
		if((pos = line.find(',')) == std::string::npos)
			throw std::invalid_argument("Error: Wrong format in data file(seperator\",\")");
		std::string date = line.substr(0, pos);
		std::string dateValue = line.substr(pos+1);
		std::istringstream iss(dateValue);
		iss >> value;
		if (iss.fail())
		    throw std::invalid_argument("Error: Invalid value in data file");
		if (!iss.eof())
		    throw std::invalid_argument("Error: Trailing characters after value in data file");
		myMap[date] = value;
	}
	if(!anyLine)
		throw std::invalid_argument("Error: Empty data file.");
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &) {
	return *this;
}

void BitcoinExchange::valueCalculation(std::string line) {
	std::map<std::string,double>::iterator it;
	std::map<std::string,double>::iterator itCheck;
	size_t delPos = 0;
	double result = 0.00;
	double value = 0.00;
	
	delPos = line.find_first_of("-0123456789", 10);
	std::string tempLine = line.substr(12);
	std::istringstream iss(tempLine);
	iss >> value;
	if (iss.fail()) {
		std::cout <<RED<< "Error" <<RESET<<": Invalid value in given file => " << line << std::endl;
		return;
	}
	
	if (!iss.eof()) {
		std::cout <<RED<< "Error" <<RESET<<": Trailing characters after value => " << line << std::endl;
		return;
	}
	
	if(delPos == std::string::npos) {
		std::cout <<RED<< "Error" <<RESET<<": Bad input => " << line << std::endl;
		return;
	}
	
	value = std::atof((line.substr(delPos)).c_str());
	if(value > 1000.00) {
		std::cout <<RED<< "Error" <<RESET<<": amount of bitcoin is too big => " << line << std::endl;
		return;
	}
	
	else if(value < 0.00) {
		std::cout <<RED<< "Error" <<RESET<<": need positive number of bitcoin! => " << line << std::endl;
		return;
	}
	it = myMap.lower_bound(line.substr(0, 10));
	// itCheck = myMap.find(line.substr(0,10));
	if((it == myMap.end()) || (it->first != line.substr(0, 10)))/*  && it != myMap.begin() */
		it--;
	result = (it->second * value);
	std::cout << std::setw(20);
	std::cout << std::left;
	std::cout << line;
	std::cout << std::setw(5);
	std::cout << std::right;
	std::cout <<  "=>  ";
	std::cout << it->second << " = ";
	std::cout <<BLUE<< result <<RESET<< std::endl; //std::fixed
}

void BitcoinExchange::exchanger(const std::string &file) {
	std::string line;
	bool firstLine = true;
	std::string tempStr;
	size_t pos = 0;
	
	std::ifstream givenFile(file.c_str());
	if(!givenFile.is_open())
		throw std::runtime_error("Error: Could not open the data File!");
	while(getline(givenFile, line)) {
		if (line.empty())
			continue;
		if(firstLine) {
			tempStr = toLowerFunction(line);
			pos = tempStr.find("date");
			if(pos == std::string::npos)
				throw std::invalid_argument("Error: Wrong format!, valid format: \"date | value\"");
			if(tempStr.substr(pos, 12) != "date | value")
				throw std::invalid_argument("Error: Wrong format!, valid format: \"date | value\"");
			firstLine = false;
			continue;
		}
		std::string date = line.substr(0, 10);
		if(!formatCheck(date)) {
			std::cout <<RED<< "Error" <<RESET<<": Bad input => " << line << std::endl;
			continue;
		}
		
		if(date < myMap.begin()->first) {
			std::cout <<RED<< "Error" <<RESET<<": Bad input => " << line << std::endl;
			continue;
		}

		if(line[10] != ' ' || line[11] != '|' || line[12] != ' ') {
			std::cout <<RED<< "Error" <<RESET<<": Bad input => " << line << std::endl;
			continue;
		}
		valueCalculation(line);
	}
}
