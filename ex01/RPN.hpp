/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 15:01:12 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/12 15:53:27 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <list>

class RPN {
	public:
		RPN();
		~RPN();
		void startFunction(const std::string &input);
	private:
		RPN(const RPN &copyThis);
		RPN &operator=(const RPN &copyThis);
		void sumFunc(const char &myOperator);
		std::stack<double, std::list<double> > myStack;
};

