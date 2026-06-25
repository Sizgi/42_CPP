/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:51:07 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/10 11:44:39 by sizgi            ###   ########.fr       */
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
		switch (static_cast<int>((forms[i] == requestedForm))) {
		case true:
			return((this->*formFuncs[i])(givenTarget));
		default:
			break;
		}
		// if(forms[i] == requestedForm)
		// 	return((this->*formFuncs[i])(givenTarget));
	}
	throw std::runtime_error("There is no such Form!\n");
}
