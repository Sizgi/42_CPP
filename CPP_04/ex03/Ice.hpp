/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:55:17 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/25 16:07:45 by sizgi            ###   ########.fr       */
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
		Ice(const Ice &copy_from_this);
		Ice &operator = (const Ice &copy_from_this);
		Ice *clone() const;
		void use(ICharacter& target);
	protected:
};



#endif