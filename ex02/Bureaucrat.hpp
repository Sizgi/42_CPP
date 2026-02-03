/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:24:29 by marvin            #+#    #+#             */
/*   Updated: 2026/01/28 15:24:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class AForm;

class Bureaucrat {

	public:
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException();
				GradeTooHighException(std::string name);
				~GradeTooHighException() throw();
				const char* what() const throw();
			private:
				std::string ownersName;
				std::string messageEx;
		};

		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException();
				GradeTooLowException(std::string name);
				~GradeTooLowException() throw();
				const char* what() const throw();
			private:
				std::string ownersName;
				std::string messageEx;
		};

		Bureaucrat(void);
		~Bureaucrat();
		Bureaucrat(std::string givenName, unsigned int givenGrade);
		Bureaucrat(const Bureaucrat &copyFromThis);
		Bureaucrat &operator=(const Bureaucrat &copyFromThis);
		std::string getName(void) const;
		void setGrade(unsigned int);
		unsigned int getGrade(void) const;
		void incrementer();
		void decrementer();
		void signAForm(AForm &bla);
		void executeForm(AForm const & form);

	private:
		const std::string name;
		unsigned int grade;
		// void GradeTooHighException();
		// void GradeTooLowException();

};

std::ostream &operator<<(std::ostream &falan, const Bureaucrat &filan);


#endif