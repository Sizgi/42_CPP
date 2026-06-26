/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:39:08 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/24 17:31:20 by sizgi            ###   ########.fr       */
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
		void makeSound(void) const;
	private:
};

#endif