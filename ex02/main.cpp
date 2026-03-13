/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:27:04 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/13 15:25:49 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::stack<int> s1;
	s1.push(42);
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
// int main()
// {
// 	{
// 		std::cout << "--------TEST 1--------" << std::endl;
// 		Span sp = Span(20);
// 		try {
// 			sp.addMultipleNumber(25);
// 		}
// 		catch(std::exception &e){
// 	        std::cout << "Exception: " << e.what() << std::endl;
// 		}
		
// 		try {
// 			sp.addNumber(6);
// 		}
// 		catch(std::exception &e){
// 	        std::cout << "Exception: " << e.what() << std::endl;
// 		}
// 		try {
// 			std::cout << sp.shortestSpan() << std::endl;
// 		}
// 		catch(std::exception &e){
// 			std::cout << "Exception: " << e.what() << std::endl;
// 		}
		
// 		try {
// 			std::cout << sp.longestSpan() << std::endl;
// 		}
// 		catch(std::exception &e){
// 			std::cout << "Exception: " << e.what() << std::endl;
// 		}

// 		try {
// 			sp.addNumber(17);
// 		}
// 		catch(std::exception &e){
// 			std::cout << "Exception: " << e.what() << std::endl;
// 		}
		
// 		try {
// 			sp.addNumber(9);
// 		}
// 		catch(std::exception &e){
// 	        std::cout << "Exception: " << e.what() << std::endl;
// 		}
		
// 		try {
// 			sp.addNumber(11);
// 		}
// 		catch(std::exception &e){
// 			std::cout << "Exception: " << e.what() << std::endl;
// 		}
		
// 		try {
// 			sp.addNumber(3);
// 		}
// 		catch(std::exception &e){
// 			std::cout << "Exception: " << e.what() << std::endl;
// 		}
		
// 		try {
// 			sp.addMultipleNumber(16);
// 		}
// 		catch(std::exception &e){
// 			std::cout << "Exception: " << e.what() << std::endl;
// 		}
		
// 		try {
// 			sp.addMultipleNumber(15);
// 		}
// 		catch(std::exception &e){
// 			std::cout << "Exception: " << e.what() << std::endl;
// 		}
		
// 		try {
// 			std::cout << sp.shortestSpan() << std::endl;
// 		}
// 		catch(std::exception &e){
// 			std::cout << "Exception: " << e.what() << std::endl;
// 		}
		
// 		try {
// 			std::cout << sp.longestSpan() << std::endl;
// 		}
// 		catch(std::exception &e){
// 			std::cout << "Exception: " << e.what() << std::endl;
// 		}
// 	}
	
// 	{
// 		std::cout << "--------TEST 2--------" << std::endl;
// 		Span sp = Span(12);
// 		std::vector<int> sp1;
// 		sp1.reserve(10000);
// 		for(int i = 0; i != 10000; ++i) {
// 			sp1.push_back(sp1.size());
// 		}
// 		// sp.addMultipleNumber(5);
// 		sp.addFromContainer(sp1.begin(), sp1.end());
// 		sp.addNumber(6);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(9);
// 		sp.addNumber(11);
// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;	
// 	}
	
// 	return 0;
// }
