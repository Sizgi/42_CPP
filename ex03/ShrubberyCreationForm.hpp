/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:56:41 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/05 13:56:41 by sizgi            ###   ########.fr       */
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