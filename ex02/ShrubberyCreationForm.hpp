/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:03:24 by marvin            #+#    #+#             */
/*   Updated: 2026/02/01 18:03:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string givenTarget);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copyFromThis);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copyFromThis);
		std::string getTarget(void) const;
 		virtual int execute(Bureaucrat const & executor) const;
	private:
		std::string target;
		void schrubTree_writer(void) const;
};

std::ostream &operator<<(std::ostream &buffer, const ShrubberyCreationForm &object);

#endif