/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:31:42 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/10 16:31:42 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "easyfind.hpp"

int main(void) {
	//	std::vector<int> (from <vector>)
	{
		std::vector<int> expArray;
		expArray.resize(10);
		for(std::vector<int>::iterator i = expArray.begin(); i != expArray.end(); i++) {
			*i = std::distance(expArray.begin(), i) + 1;
		}
		try {
			easyfind(expArray, 10);
			easyfind(expArray, 5);
			easyfind(expArray, 99);
		}
		catch (std::exception &e) {
    	    std::cout << "Exception: " << e.what() << std::endl;
    	}
	}
	//	std::list<int> (from <list>)
	{
		std::list<int> expArray;
		expArray.resize(10);
		for(std::list<int>::iterator i = expArray.begin(); i != expArray.end(); i++) {
			*i = std::distance(expArray.begin(), i) + 1;
		}
		try {
			easyfind(expArray, 10);
			easyfind(expArray, 5);
			easyfind(expArray, 99);
		}
		catch (std::exception &e) {
     	   std::cout << "Exception: " << e.what() << std::endl;
   		}
	}
	//	std::deque<int> (from <deque>)
	{
		std::deque<int> expArray;
		expArray.resize(10);
		for(std::deque<int>::iterator i = expArray.begin(); i != expArray.end(); i++) {
			*i = std::distance(expArray.begin(), i) + 1;
		}
		try {
			easyfind(expArray, 10);
			easyfind(expArray, 5);
			easyfind(expArray, 99);
		}
		catch (std::exception &e) {
     	   std::cout << "Exception: " << e.what() << std::endl;
   		}
	}
}