/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:25:41 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/02 17:25:41 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45), target("default") {
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string givenTarget): AForm("RobotomyRequestForm", 72, 45), target(givenTarget) {
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copyFromThis):
 AForm(copyFromThis), target(copyFromThis.target) {
	srand(time(NULL));
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copyFromThis) {
	if(this != &copyFromThis) {
		this->AForm::setSign(copyFromThis.AForm::getSign());
		this->target = copyFromThis.target;
	}
	return *this;
}

std::string RobotomyRequestForm::getTarget(void) const {
	return(target);
}

void RobotomyRequestForm::robotomizer(void) const {
	int randomNumber = 0;
	randomNumber = rand() % 100 + 1;
	std::cout << "DRILLING NOISES * Bzzzz... Wrrr... Bzzzz...\n";
	if(randomNumber < 51)
		std::cout << "Robotomizing " << target << " has failed!\n";
	else
		std::cout << target << " has been Robotomized!\n";
}

int RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if(getSign())
	{
		if(executor.getGrade() <= getGradeToExecute())
		{
			robotomizer();
			std::cout << executor.getName() << " executed " << this->getName()  << " form.\n";
		}
		else
			throw GradeTooLowException(executor.getName());
	}
	else
		throw FormNotSigned(getName());
	return 0;
}

std::ostream &operator<<(std::ostream &buffer, const RobotomyRequestForm &object) {
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
