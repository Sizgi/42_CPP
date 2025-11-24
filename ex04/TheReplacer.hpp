/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TheReplacer.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:43:54 by sizgi             #+#    #+#             */
/*   Updated: 2025/11/24 16:27:35 by sizgi            ###   ########.fr       */
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
		std::string file_name;
		int	func1(void);
		int func2(std::ifstream in_f, std::ofstream out_f);
	public:
		TheReplacer(std::string s1, std::string s2, std::string given_fn);
};


#endif