/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:27:04 by sizgi             #+#    #+#             */
/*   Updated: 2026/06/02 17:04:25 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main()
{
	std::cout << "subject" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it1;
	--it1;
	while (it1 != ite)
	{
	std::cout << *it1 << std::endl;
	++it1;
	}
	// std::stack<int> s(mstack);
	// it1 = s.begin();
	// ite = s.end();
	std::cout << "\nFLOAT STACK" << std::endl;


	MutantStack<float>	flt;
	flt.push(3e4f);
	flt.push(30000.0F);
	flt.push(4e4f);
	flt.push(2e4f);
	flt.push(50000.0F);
	
	try
	{
		std::cout << flt[6] << std::endl;
		std::cout << flt[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "\nstack:\n";
	for (MutantStack<float>::iterator i = flt.begin(); i != flt.end(); ++i)
	{
		std::cout << *i << " ";
	}
	std::cout << "\n";


	std::replace(flt.begin(), flt.end(), 20000, 99999);


	for (MutantStack<float>::iterator i = flt.begin(); i != flt.end(); ++i)
	{
		std::cout << *i << " ";
	}
	std::cout << "\n";


	MutantStack<float>::iterator it = flt.begin();
	std::cout << "first item: " << *it << " " <<  "\n";


	std::cout << "third item: " << *(it + 2) << " " <<  "\n";
	std::cout << "last item: " << *(flt.end() - 1) << " " <<  "\n";




	float number = 22222;
	MutantStack<float>::iterator res = std::find(flt.begin(), flt.end(), number);
	if (res == flt.end())
		std::cout << "Not found: " << number << "\n" ;
	else
		std::cout << "Found: " << *res << "\n";


	number = 99999;
	res = std::find(flt.begin(), flt.end(), number);
	if (res == flt.end())
		std::cout << "Not found: " << number << "\n";
	else
		std::cout << "Found: " << *res << "\n";


	number = 30000;
	std::cout << "Number " << number << " found " << std::count(flt.begin(), flt.end(), number) << " times." << "\n";

	std::cout << "\nSTRING STACK" << std::endl;


	MutantStack<std::string>	strstc;
	strstc.push("Algea");
	strstc.push("Beatle");
	strstc.push("Cheetah");
	strstc.push("Donkey");
	strstc.push("Eagle");
	for (MutantStack<std::string>::iterator it = strstc.begin(); it != strstc.end(); ++it)
	{
		std::cout << *it << "\n";
	}
	std::cout << "\n";
	
	std::string toFind = "99999";
	MutantStack<std::string>::iterator res2 = std::find(strstc.begin(), strstc.end(), toFind);
	if (res2 == strstc.end())
		std::cout << "Not found: " << toFind << "\n";
	else
		std::cout << "Found: " << *res2 << "\n";


	toFind = "Beatle";
	res2 = std::find(strstc.begin(), strstc.end(), toFind);
	if (res2 == strstc.end())
		std::cout << "Not found: " << toFind << "\n";
	else
		std::cout << "Found: " << *res2 << "\n";
		
	try
	{
		std::cout << strstc[4] << std::endl;
		std::cout << strstc[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}