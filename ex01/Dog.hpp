/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:59:05 by sizgi             #+#    #+#             */
/*   Updated: 2025/12/23 19:22:13 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog();
		Dog(const Dog &copy_from_this);
		Dog &operator=(const Dog &copy_from_this);
		// std::string getType(void) const;
		// void setType(std::string given_type);
		void makeSound(void) const;
		std::string getIdea(int index) const;
		void setIdea(int index, std::string str_to_set);
	private:
		Brain *dogBrain;
};

#endif