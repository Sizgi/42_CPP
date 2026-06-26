/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:54:57 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/05 13:54:57 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string givenTarget);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copyFromThis);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &copyFromThis);
		std::string getTarget(void) const;
 		virtual int execute(Bureaucrat const & executor) const;
	private:
		std::string target;
};


#endif