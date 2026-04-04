/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 15:01:12 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/03 14:24:31 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stack>

class RPN {
	public:
		RPN();
		~RPN();
		void startFunction(std::string &input);
	private:
		RPN(const RPN &copyThis);
		RPN &operator=(const RPN &copyThis);
		std::string userInput;
};

