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

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form {
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

		Form();
		Form(const std::string givenName, const int gradeToS, const int gradeToE);
		~Form();
		Form(const Form &copyFromThis);
		Form &operator=(const Form &copyFromThis);
		std::string getName(void) const;
		bool getSign(void) const;
		unsigned int getGradeToSign(void) const;
		unsigned int getGradeToExecute(void) const;
		void beSigned(const Bureaucrat &bearaucrat);

	private:
		const std::string 	formName;
		bool				sign;
		const unsigned int	gradeToSign;
		const unsigned int	gradeToExecute;
};

std::ostream &operator<<(std::ostream &buffer, const Form &object);

#endif