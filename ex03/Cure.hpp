/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:55:28 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/02 19:50:46 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		~Cure();
		Cure(std::string const &type);
		//const std::string &getType() const; //Returns the materia type
		Cure(const Cure &copy_from_this);
		Cure &operator = (const Cure &copy_from_this);
		Cure *clone() const;
		void use(ICharacter& target);
	protected:
};



#endif