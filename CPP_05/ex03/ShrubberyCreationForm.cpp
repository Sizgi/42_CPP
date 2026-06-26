/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:56:35 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/05 13:56:35 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 137), target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string sName): AForm("ShrubberyCreationForm", 145, 137), target(sName) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copyFromThis):
 AForm(copyFromThis), target(copyFromThis.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copyFromThis) {
	if(this != &copyFromThis)
	{
		this->AForm::setSign(copyFromThis.AForm::getSign());
		this->target = copyFromThis.target;
	}
	return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const {
	return(target);
}

void ShrubberyCreationForm::schrubTree_writer(void) const {
	std::string temp = target +"_shrubbery";
	std::ofstream outfile(temp.c_str());
	if(!outfile.is_open())
		throw std::runtime_error("something went wrong while creating a File!\n");
	outfile << "       ^       \n";
    outfile << "      ^^^      \n";
    outfile << "     ^^^^^     \n";
    outfile << "    ^^^^^^^    \n";
    outfile << "   ^^^^^^^^^   \n";
    outfile << "      |||      \n";
    outfile.close();
}

int ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if(getSign()) {
		if(getGradeToExecute() >= executor.getGrade()) {
			schrubTree_writer();
			std::cout << executor.getName() << " executed " << this->getName()  << " form.\n";
		}
		else
			throw GradeTooLowException(executor.getName());
	}
	else
		throw FormNotSigned(getName());
	return 0;
}

std::ostream &operator<<(std::ostream &buffer, const ShrubberyCreationForm &object) {
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
