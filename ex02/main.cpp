/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:41:47 by sizgi             #+#    #+#             */
/*   Updated: 2026/06/09 19:53:58 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <cmath>
std::size_t fordJohnsonWorstCase(const std::size_t n)
{
	std::size_t total = 0;

	for (std::size_t k = 1; k <= n; k++)
	{
		total += std::ceil(log2((3.0 / 4.0) * k));
	}
	std::cout <<"LIMIT: "<< total << std::endl; 
	return (total);
}

int main(int argc, char** argv) {
	PmergeMe *yeni = new PmergeMe();
	if(argc < 2) {
		std::cerr << "Exp. Usage: ./PmergeMe \"7 1 5 9 6\" or ./PmergeMe 7 1 5 9 6" << std::endl;
		delete yeni;
		return 1;
	}
	std::string tempStr = "";
	for(int i = 1; i < argc; i++){
		if(i > 1)
			tempStr += " ";
		tempStr += argv[i];
	}
	yeni->VectorPrintOutFunc(1, tempStr);
	struct timeval start, end;
    gettimeofday(&start, NULL);
    yeni->mergerVectorFunc();
    gettimeofday(&end, NULL);
	yeni->VectorPrintOutFunc(0, "");
	yeni->getCompCount();
	
    double duration = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);
    std::cout << std::fixed << std::setprecision(5);
    std::cout << BOLD << CYAN << "Time to process a range of " << yeni->getSize() 
				<< " elements with std::vector : " << duration << " us" << RESET << std::endl;

	yeni->DequePrintOutFunc(1, tempStr);
    gettimeofday(&start, NULL);
    yeni->mergerDequeFunc();
    gettimeofday(&end, NULL);
	yeni->DequePrintOutFunc(0, "");
	yeni->getCompCount();
    duration = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);
    std::cout << std::fixed << std::setprecision(5);
    std::cout << BOLD << CYAN << "Time to process a range of " << yeni->getSize() 
				<< " elements with std::deque : " << duration << " us" << RESET << std::endl;
	fordJohnsonWorstCase(100);
	delete yeni;
	return 0;
}
