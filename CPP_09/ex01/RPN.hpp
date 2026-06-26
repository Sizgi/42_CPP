/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 15:01:12 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/12 17:27:49 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
#define RPN_HPP

// #pragma once

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <list>
#include <list>
#include "RPN.hpp"

class RPN {
	public:
		RPN();
		~RPN();
		void startFunction(const std::string &input);
	private:
		RPN(const RPN &copyThis);
		RPN &operator=(const RPN &copyThis);
		void sumFunc(const char myOperator);
		std::stack<double, std::list<double> > myStack;
};

#endif