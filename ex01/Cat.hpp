/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:39:08 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/20 19:33:25 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat();
		Cat(const Cat &copy_from_this);
		Cat &operator=(const Cat &copy_from_this);
		std::string getIdea(int index) const;
		void setIdea(int index, std::string str_to_set);
		void makeSound(void) const;
	private:
		Brain *catBrain;
};

#endif