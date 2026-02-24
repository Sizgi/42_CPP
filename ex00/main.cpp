/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:52:21 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/05 13:52:21 by sizgi            ###   ########.fr       */
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
		delete dog;
		Bureaucrat *bear = new Bureaucrat("Winnie", 1256987987);
		std::cout << *bear << std::endl;
		delete bear;
	}
	catch(Bureaucrat::GradeTooHighException &error) {
		std::cout << error.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &error) {
		std::cout << "Exception: " << error.what();
	}
	return 0;
}