/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:03:07 by marvin            #+#    #+#             */
/*   Updated: 2026/01/30 14:03:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	try {
		Bureaucrat cat;
		std::cout << cat << std::endl;
		Bureaucrat fox("Foxy", 150);
		std::cout << fox << std::endl;
		Bureaucrat *dog = new Bureaucrat("Chucky", 1);
		std::cout << *dog << std::endl;
		Bureaucrat *bear = new Bureaucrat("Winnie", 1256987987);
		std::cout << *bear << std::endl;
		delete dog;
	}
	catch(Bureaucrat::GradeTooHighException &error) {

		std::cout << error.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &error) {
		std::cout << "Exception: " << error.what();
	}

	return 0;
}