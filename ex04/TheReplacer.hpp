/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TheReplacer.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:43:54 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/25 16:35:30 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __THEREPLACER_HPP__
#define __THEREPLACER_HPP__

#include <iostream>
#include <fstream>
#include <string>

class TheReplacer
{
	private:
		std::string string1;
		std::string stirng2;
		size_t		str1_s;
		size_t		str2_s;
		std::string file_name;
		int func2(std::ifstream &in_f, std::ofstream &out_f);
		int empty_fcheck(std::ifstream &in_f);
		size_t multi_rep(std::string line, std::ofstream &out_f);//to be able to replace multiple occurrence
		void error_function(int code);
	public:
		TheReplacer(std::string s1, std::string s2, std::string given_fn);
		int	func1(void);
};


#endif