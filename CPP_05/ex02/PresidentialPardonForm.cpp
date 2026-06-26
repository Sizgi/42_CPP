/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:25:41 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/02 17:25:41 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5), target("default") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string givenTarget): AForm("PresidentialPardonForm", 25, 5), target(givenTarget) {
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copyFromThis):
 AForm(copyFromThis), target(copyFromThis.target) {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copyFromThis) {
	if(this != &copyFromThis)
	{
		this->AForm::setSign(copyFromThis.AForm::getSign());
		this->target = copyFromThis.target;
	}
	return *this;
}

std::string PresidentialPardonForm::getTarget(void) const {
	return(target);
}

int PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if(getSign())
	{
		if(executor.getGrade() <= getGradeToExecute()) {
			std::cout <<target<< " has been pardoned by Zaphod Beeblebrox.\n";
			std::cout << executor.getName() << " executed " << this->getName()  << " form.\n";
		}
		else
			throw GradeTooLowException(executor.getName());
	}
	else
		throw FormNotSigned(getName());
	return 0;
}

std::ostream &operator<<(std::ostream &buffer, const PresidentialPardonForm &object) {
	buffer << "Form name: "<< object.getName() << "\n";
	buffer << "Grade needs to sign: " << object.getGradeToSign() << "\n";
	buffer << "Grade needs to execute: " << object.getGradeToExecute() << "\n";
	buffer << "Target: " << object.getTarget() << "\n";
	if(object.getSign())
		buffer << "signed\n";
	else
		buffer << "not signed\n";
	return buffer;
}
