/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:59:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/04 17:50:05 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::string line;
	bool firstLine = true;
	double value = 0.00;
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
	// for(std::map<std::string, double>::iterator i = myMap.begin(); i != myMap.end(); i++) {
	// 	std::cout << i->first << " => " << i->second << std::endl;
	// }
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &) {
	return *this;
}

bool isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int maxDaysInMonth(int month, int year) {
	int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if(month == 2 && isLeapYear(year))
		return 29;
	return (days[month - 1]);
}

bool dateCheck(std::string date) {
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

bool	formatCheck(const std::string &date) {
	for(int i = 0; i < 10; ++i) {
		if(i == 4 || i == 7) {
			if(date[i] != '-')
				return false;
		}
		else if(!std::isdigit(date[i]))
			return false;
	}
	if(!dateCheck(date))
		return false;
	return true;
}

/////ARTIK YIL KURALLARI
// Artık yıl hesabı görünürden biraz daha karmaşık:
// 4'e bölünebiliyorsa → artık yıl
// Ama 100'e de bölünebiliyorsa → artık yıl değil
// Ama 400'e de bölünebiliyorsa → yine artık yıl
// Bu yüzden 1900 artık yıl değilken 2000 artık yıldır.
/////ARTIK YIL KURALLARI

void	BitcoinExchange::valueCalculation(std::string line) {
	std::map<std::string,double>::iterator it;
	std::map<std::string,double>::iterator itCheck;
	size_t delPos = 0;
	double result = 0.00;
	
	delPos = line.find_first_of("-0123456789", 10);
	if(delPos ==std::string::npos) {
		std::cout <<RED<< "Error" <<RESET<<": Bad input => " << line << std::endl;
		return;
	}
	double value = std::atof((line.substr(delPos)).c_str());
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
	if((it == myMap.end()) || (it->first != line.substr(0, 10)/*  && it != myMap.begin() */))
		it--;
	//////////////////NEEDS LOWER BOUND CHECK AND END CHECK!/////////////////////////////////
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
	
	std::ifstream givenFile(file.c_str());
	if(!givenFile.is_open())
		throw std::runtime_error("Could not open the data File!\n");
	while(getline(givenFile, line)) {
		if (line.empty())
			continue;
		if(firstLine){
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
		// std::istringstream iss(dateValue);
	}
}



