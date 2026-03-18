/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:27:04 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/18 16:07:13 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	// std::stack<int> s1;
	// s1.push(42);
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	// mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	std::cout << "understanding" << mstack.top() << std::endl;
	
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


//  int	main()
// {
// 	std::cout << "-------------FLOAT STACK--------------------------" << std::endl;
// 	std::cout << "init variable and assign values\n";


// 	MutantStack<float>	st;
// 	st.push(3e4f);
// 	st.push(3e4f);
// 	st.push(4e4f);
// 	st.push(2e4f);
// 	st.push(5e4f);


// 	std::cout << "\nstack:\n";
// 	for (MutantStack<float>::iterator i = st.begin(); i != st.end(); ++i)
// 	{
// 		std::cout << *i << " ";
// 	}
// 	std::cout << "\n";


// 	std::cout << "\nreplace a value using STL algorithm\n";
// 	std::replace(st.begin(), st.end(), 20000, 99999);


// 	std::cout << "\nstack after replace:\n";
// 	for (MutantStack<float>::iterator i = st.begin(); i != st.end(); ++i)
// 	{
// 		std::cout << *i << " ";
// 	}
// 	std::cout << "\n";


// 	std::cout << "\nfind items using iterator:\n";
// 	MutantStack<float>::iterator it = st.begin();
// 	std::cout << "first item: " << *it << " " <<  "\n";


// 	std::cout << "third item: " << *(it + 2) << " " <<  "\n";
// 	std::cout << "last item: " << *(st.end() - 1) << " " <<  "\n";




// 	std::cout << "\nfind items using STL algorithm:\n";
// 	float number = 22222;
// 	MutantStack<float>::iterator res = std::find(st.begin(), st.end(), number);
// 	if (res == st.end())
// 		std::cout << "Not found: " << number << "\n" ;
// 	else
// 		std::cout << "Found: " << *res << "\n";


// 	number = 99999;
// 	res = std::find(st.begin(), st.end(), number);
// 	if (res == st.end())
// 		std::cout << "Not found: " << number << "\n";
// 	else
// 		std::cout << "Found: " << *res << "\n";


// 	number = 30000;
// 	std::cout << "Number " << number << " found \e[1;32m"
// 	<< std::count(st.begin(), st.end(), number)
// 	<< "\e[0m times." << "\n";


// 	std::cout << "\n-------------STRING STACK--------------------------" << std::endl;


// 	MutantStack<std::string>	strstc;
// 	strstc.push("Algea");
// 	strstc.push("Beatle");
// 	strstc.push("Cheetah");
// 	strstc.push("Donkey");
// 	strstc.push("Eagle");
// 	for (MutantStack<std::string>::iterator it = strstc.begin(); it != strstc.end(); ++it)
// 	{
// 		std::cout << *it << " ";
// 	}
// 	std::cout << "\n";
	
// 	std::string toFind = "99999";
// 	MutantStack<std::string>::iterator res2 = std::find(strstc.begin(), strstc.end(), toFind);
// 	if (res2 == strstc.end())
// 		std::cout << "Not found: " << toFind << "\n";
// 	else
// 		std::cout << "Found: " << *res2 << "\n";


// 	toFind = "Beatle";
// 	res2 = std::find(strstc.begin(), strstc.end(), toFind);
// 	if (res2 == strstc.end())
// 		std::cout << "Not found: " << toFind << "\n";
// 	else
// 		std::cout << "Found: " << *res2 << "\n";


// 	try
// 	{
// 		std::cout << strstc[4] << std::endl;
// 		std::cout << strstc[5] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	return (0);
// }