/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:55:17 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/26 17:40:41 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
#define Ice_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		~Ice();
		Ice(std::string const &type);
		const std::string &getType() const; //Returns the materia type
		Ice(const Ice &copy_from_this);
		Ice &operator = (const Ice &copy_from_this);
		Ice *clone() const;
		void use(ICharacter& target);
	protected:
};



#endif