/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:03:24 by marvin            #+#    #+#             */
/*   Updated: 2026/02/01 18:03:24 by marvin           ###   ########.fr       */
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
		// virtual void beSigned(const Bureaucrat &bearaucrat);

	private:
		std::string target;
		void robotomizer(void) const;
};

std::ostream &operator<<(std::ostream &buffer, const RobotomyRequestForm &object);

#endif