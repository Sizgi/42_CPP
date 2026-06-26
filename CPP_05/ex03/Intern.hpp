/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:51:07 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/18 14:45:50 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern &copyThis);
		Intern &operator=(const Intern &copyThis);
		AForm *makeForm(std::string requestedForm, std::string givenTarget);
	private:
		AForm *makeShrub(std::string &target);
		AForm *makeRobo(std::string &target);
		AForm *makePresident(std::string &target);
};


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


#endif