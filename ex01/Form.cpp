/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:45:57 by marvin            #+#    #+#             */
/*   Updated: 2026/01/30 18:45:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

////GradeTooHighException////
Form::GradeTooHighException::GradeTooHighException(void): ownersName("nameless") {
	messageEx = "Grade Too High, it doesnt even exist!-Form\n";
}

Form::GradeTooHighException::GradeTooHighException(std::string name): ownersName(name) {
	messageEx = ownersName + ", Grade Too High, it doesnt even exist!-Form\n";
}

const char* Form::GradeTooHighException::what() const throw() {
	return messageEx.c_str();
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
}

////GradeTooLowException////
Form::GradeTooLowException::GradeTooLowException(void): ownersName("nameless") {
	messageEx = "Grade is too low to sign!-Form\n";
}

Form::GradeTooLowException::GradeTooLowException(std::string name): ownersName(name) {
	messageEx = ownersName + ", Grade is too low to sign!-Form\n";
}

const char* Form::GradeTooLowException::what() const throw() {
	return messageEx.c_str();
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
}

////Form////
Form::Form(void): formName("default"), sign(0), gradeToSign(150), gradeToExecute(150)  {
}

Form::Form(const std::string givenName, const int gradeToS, const int gradeToE): 
	formName(givenName), sign(0), gradeToSign(gradeToS), gradeToExecute(gradeToE) {
	if(gradeToS > 150 || gradeToE > 150)
		throw GradeTooLowException(givenName);
	else if (gradeToS < 1 || gradeToE < 1)
		throw GradeTooHighException(givenName);

}

Form::~Form(void) {
}

Form::Form(const Form &copyFromThis): 
formName(copyFromThis.formName), sign(copyFromThis.sign), gradeToSign(copyFromThis.gradeToSign), gradeToExecute(copyFromThis.gradeToExecute){
} 

Form &Form::operator=(const Form &copyFromThis) {
	if(this != &copyFromThis)
		this->sign = copyFromThis.sign;
	return *this;
}

std::string Form::getName(void) const{
	return formName;
}

void Form::beSigned(const Bureaucrat &bearaucrat) {
	if(bearaucrat.getGrade() > gradeToSign)
		throw GradeTooLowException(bearaucrat.getName());
	else
		sign = 1;
}
// void Form::setSign(bool ka)
// {}

bool Form::getSign(void) const {
	return sign;
}

unsigned int Form::getGradeToSign(void) const {
	return gradeToSign;
}

unsigned int Form::getGradeToExecute(void) const {
	return gradeToExecute;
}

std::ostream &operator<<(std::ostream &buffer, const Form &object) {
	buffer << "Form name: "<< object.getName() << "\n";
	buffer << "Grade needs to sign: " << object.getGradeToSign() << "\n";
	buffer << "Grade needs to execute: " << object.getGradeToExecute() << "\n";
	if(object.getSign())
		buffer << "signed\n";
	else
		buffer << "not signed\n";

	return buffer;
}