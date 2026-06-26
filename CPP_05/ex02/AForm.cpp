/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:54:09 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/05 13:54:09 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

////GradeTooHighException////
AForm::GradeTooHighException::GradeTooHighException(void): ownersName("nameless") {
	messageEx = "Grade Too High, it doesnt even exist!-AForm\n";
}

AForm::GradeTooHighException::GradeTooHighException(std::string name): ownersName(name) {
	messageEx = ownersName + ", Grade Too High, it doesnt even exist!-AForm\n";
}

const char* AForm::GradeTooHighException::what() const throw() {
	return messageEx.c_str();
}

AForm::GradeTooHighException::~GradeTooHighException() throw() {}

////GradeTooLowException////
AForm::GradeTooLowException::GradeTooLowException(void): ownersName("nameless") {
	messageEx = "Grade is too low to sign!-AForm\n";
}

AForm::GradeTooLowException::GradeTooLowException(std::string name): ownersName(name) {
	messageEx = ownersName + ", Grade is too low to sign!-AForm\n";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return messageEx.c_str();
}

AForm::GradeTooLowException::~GradeTooLowException() throw() {}

////FormNotSigned////
AForm::FormNotSigned::FormNotSigned(void): ownersName("nameless") {
	messageEx = " is not signed!-AForm\n";
}
AForm::FormNotSigned::FormNotSigned(std::string name): ownersName(name) {
	messageEx = ownersName + " is not signed!!-AForm\n";
}
AForm::FormNotSigned::~FormNotSigned() throw() {}

const char* AForm::FormNotSigned::what() const throw() {
	return messageEx.c_str();
}

////AForm////
AForm::AForm(void): AFormName("default"), sign(0), gradeToSign(150), gradeToExecute(150) {}

AForm::AForm(const std::string givenName, const int gradeToS, const int gradeToE): 
	AFormName(givenName), sign(0), gradeToSign(gradeToS), gradeToExecute(gradeToE) {
	if(gradeToS > 150 || gradeToE > 150)
		throw GradeTooLowException(givenName);
	else if (gradeToS < 1 || gradeToE < 1)
		throw GradeTooHighException(givenName);
}

AForm::~AForm(void) {}

AForm::AForm(const AForm &copyFromThis): AFormName(copyFromThis.AFormName), sign(copyFromThis.sign),
 gradeToSign(copyFromThis.gradeToSign), gradeToExecute(copyFromThis.gradeToExecute) {} 

AForm &AForm::operator=(const AForm &copyFromThis) {
	if(this != &copyFromThis)
		this->sign = copyFromThis.sign;
	return *this;
}

std::string AForm::getName(void) const{
	return AFormName;
}

void AForm::beSigned(const Bureaucrat &bearaucrat) {
	if(bearaucrat.getGrade() > gradeToSign)
		throw GradeTooLowException(bearaucrat.getName());
	else
		sign = 1;
}

void AForm::setSign(bool signature) {
	sign = signature;
}

bool AForm::getSign(void) const {
	return sign;
}

unsigned int AForm::getGradeToSign(void) const {
	return gradeToSign;
}

unsigned int AForm::getGradeToExecute(void) const {
	return gradeToExecute;
}

std::ostream &operator<<(std::ostream &buffer, const AForm &object) {
	buffer << "Form name: "<< object.getName() << "\n";
	buffer << "Grade needs to sign: " << object.getGradeToSign() << "\n";
	buffer << "Grade needs to execute: " << object.getGradeToExecute() << "\n";
	if(object.getSign())
		buffer << "signed\n";
	else
		buffer << "not signed\n";
	return buffer;
}