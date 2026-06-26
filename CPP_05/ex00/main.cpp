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
	{
		try {
			Bureaucrat cat;

			std::cout << cat << std::endl;
			Bureaucrat fox("Foxy", 150);
			std::cout << fox << std::endl;

			Bureaucrat *dog = new Bureaucrat("Chucky", 1);
			std::cout << *dog << std::endl;
			dog->decrementer();
			std::cout << *dog << std::endl;
			delete dog;

			Bureaucrat *cowboy = new Bureaucrat("Dak", 15);//1256987987
			std::cout << *cowboy << std::endl;
			delete cowboy;

			Bureaucrat *Hawk = new Bureaucrat("Sam", 64);
			std::cout << *Hawk << std::endl;
			Hawk->incrementer();
			std::cout << *Hawk << std::endl;
			delete Hawk;

			Bureaucrat *bear = new Bureaucrat("Winnie", 0);
			std::cout << *bear << std::endl;
			delete bear;
		}
    	catch (std::exception& e) {
    	    std::cout << "Exception: " << e.what();
		}
	}
	try {
		Bureaucrat *cat = new Bureaucrat("Chuck", -2147483648);
		std::cout << *cat << std::endl;
		cat->decrementer();
		delete cat;
	}
	catch (std::exception& e) {
        std::cout << "Exception: " << e.what();
	}
	try {	
		Bureaucrat *snake = new Bureaucrat("Chucky", 2147483647);
		std::cout << *snake << std::endl;
		snake->decrementer();
		delete snake;
	}
	    catch (std::exception& e) {
        std::cout << "Exception: " << e.what();
	}
	try {
		Bureaucrat *falan = new Bureaucrat("Chuc", 1);
		std::cout << *falan << std::endl;
		// falan->incrementer();
		delete falan;
	}
	catch (std::exception& e) {
        std::cout << "Exception: " << e.what();
	}
	// catch(Bureaucrat::GradeTooHighException &error) {
	// 	std::cout << "Exception: " << error.what() << std::endl;
	// }
	// catch(Bureaucrat::GradeTooLowException &error) {
	// 	std::cout << "Exception: " << error.what();
	// }
	return 0;
}