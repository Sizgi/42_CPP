/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:52:49 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/05 13:52:49 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

////GradeTooHighException////
Bureaucrat::GradeTooHighException::GradeTooHighException(void): ownersName("nameless") {
	messageEx = "Grade Too High, it doesnt even exist!-Bureaucrat\n";
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string name): ownersName(name) {
	messageEx = ownersName + ", Grade Too High, it doesnt even exist!-Bureaucrat\n";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return messageEx.c_str();
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}

////GradeTooLowException////
Bureaucrat::GradeTooLowException::GradeTooLowException(void): ownersName("nameless") {
	messageEx = "Grade Too Low, it doesnt even mean anything!!-Bureaucrat\n";
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string name): ownersName(name) {
	messageEx = ownersName + ", Grade Too Low, it doesnt even mean anything!!-Bureaucrat\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return messageEx.c_str();
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
}

////Bureaucrat////
Bureaucrat::Bureaucrat(void): name("Dude"), grade(150) {
}

Bureaucrat::Bureaucrat(std::string givenName, int givenGrade): name(givenName) {
	if(givenGrade > 150)
		throw GradeTooLowException(givenName);
	else if (givenGrade < 1)
		throw GradeTooHighException(givenName);
	grade = givenGrade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &copyFromThis): name(copyFromThis.name), grade(copyFromThis.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copyFromThis) {
	if(this != &copyFromThis)
		this->grade = copyFromThis.grade;
	return *this;
}

std::string Bureaucrat::getName(void) const {
	return(name); 
}

void Bureaucrat::setGrade(int givenGrade) {
	if(givenGrade > 150)
		throw GradeTooLowException(name);
	else if (givenGrade < 1)
		throw GradeTooHighException(name);
	grade = givenGrade;
}

unsigned int Bureaucrat::getGrade(void) const {
	return(grade);
}

void Bureaucrat::incrementer() {
	if(grade == 1)
		throw GradeTooHighException(name);
	grade -= 1;
}
void Bureaucrat::decrementer() {
	if(grade == 150)
		throw GradeTooLowException(name);
	grade += 1;
}

void Bureaucrat::signForm(Form &bla) {
	if(bla.getSign())
	{
		std::cout << bla.getName() << " is already signed\n";
		return;
	}
	try {
		bla.beSigned(*this);
		std::cout<< name << " signed " <<bla.getName()<< std::endl;
		}
	catch(Form::GradeTooLowException &error) {
 		std::cout << name << " couldn't sign " << bla.getName() 
            << " because " << error.what();
		}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &object) {
	out << object.getName() << ", grade " << object.getGrade();
	return out;
}
