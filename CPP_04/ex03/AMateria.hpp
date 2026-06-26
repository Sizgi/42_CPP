/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 14:55:13 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/25 16:03:35 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		virtual ~AMateria();
		AMateria(const AMateria &copy_from_this);
		AMateria(std::string const & type);
		AMateria &operator = (const AMateria &copy_from_this);
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	private:
		std::string mat_type;
};

#endif