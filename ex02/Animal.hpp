/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:40:24 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/23 18:54:58 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include <stdlib.h>

// enum Type
// {
// 	CAT,
// 	DOG,
// 	DRAGON,
// };

class Animal
{
	public:
		Animal(void);
		virtual ~Animal();
		Animal(const Animal &copy_from_this);
		Animal &operator=(const Animal &copy_from_this);
		std::string getType(void) const;
		void setType(std::string given_type);
		virtual void makeSound(void) const = 0;
	protected:
		std::string type;
};

#endif
