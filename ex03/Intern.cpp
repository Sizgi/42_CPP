/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:51:07 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/18 14:47:47 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern &) {}

Intern &Intern::operator=(const Intern &) {
	return *this;
}

AForm *Intern::makeShrub(std::string &target) {
	std::cout <<"Intern creates ShrubberyCreationForm" << std::endl;
	return(new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobo(std::string &target) {
	std::cout <<"Intern creates RobotomyRequestForm" << std::endl;
	return(new RobotomyRequestForm(target));
}

AForm *Intern::makePresident(std::string &target) {
	std::cout <<"Intern creates PresidentialPardonForm" << std::endl;
	return(new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string requestedForm, std::string givenTarget)
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *(Intern::*formFuncs[3])(std::string&) = {&Intern::makeShrub, &Intern::makeRobo, &Intern::makePresident};
	for(int i = 0; i < 3; i++)
	{
		if(forms[i] == requestedForm)
			return((this->*formFuncs[i])(givenTarget));
	}
	throw std::runtime_error("There is no such Form!\n");
}


// However, the intern has one key ability: the makeForm() function. This function
// takes two strings as parameters: the first one represents the name of a form, and the
// second one represents the target of the form. It returns a pointer to a AForm object
// (corresponding to the form name passed as a parameter), with its target initialized to
// the second parameter.
// It should print something like:
// Intern creates <form>
// If the provided form name does not exist, print an explicit error message.
// 14C++ - Module 05
// Repetition and Exceptions
// You must avoid unreadable and messy solutions, such as using an excessive if/el-
// seif/else structure. This kind of approach will not be accepted during the evaluation
// process. You’re not in the Piscine (pool) anymore. As usual, you must test everything
// to ensure it works as expected.
// For example, the following code creates a RobotomyRequestForm targeted at
// "Bender":
