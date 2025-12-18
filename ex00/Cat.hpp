/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:39:08 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/18 19:14:57 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat();
		Cat(const Cat &copy_from_this);
		Cat &operator=(const Cat &copy_from_this);
		// std::string getType(void) const;
		// void setType(std::string given_type);
		void makeSound(void) const;
	private:
};

#endif