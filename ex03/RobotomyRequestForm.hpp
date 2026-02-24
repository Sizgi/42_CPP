/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:56:30 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/05 13:56:30 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm: public AForm {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string givenTarget);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copyFromThis);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copyFromThis);
		std::string getTarget(void) const;
 		virtual int execute(Bureaucrat const & executor) const;
	private:
		std::string target;
		void robotomizer(void) const;
};

std::ostream &operator<<(std::ostream &buffer, const RobotomyRequestForm &object);

#endif