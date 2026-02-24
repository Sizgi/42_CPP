/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:54:03 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/05 13:54:03 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm {
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

			class FormNotSigned : public std::exception {
			public:
				FormNotSigned();
				FormNotSigned(std::string name);
				~FormNotSigned() throw();
				const char* what() const throw();
			private:
				std::string ownersName;
				std::string messageEx;
		};

		AForm();
		AForm(const std::string givenName, const int gradeToS, const int gradeToE);
		virtual ~AForm();
		AForm(const AForm &copyFromThis);
		AForm &operator=(const AForm &copyFromThis);
		std::string getName(void) const;
		bool getSign(void) const;
		void setSign(bool signature);
		unsigned int getGradeToSign(void) const;
		unsigned int getGradeToExecute(void) const;
		void beSigned(const Bureaucrat &bearaucrat);
 		virtual int execute(Bureaucrat const & executor) const = 0;
	private:
		const std::string 	AFormName;
		bool				sign;
		const unsigned int	gradeToSign;
		const unsigned int	gradeToExecute;
};

std::ostream &operator<<(std::ostream &buffer, const AForm &object);

#endif