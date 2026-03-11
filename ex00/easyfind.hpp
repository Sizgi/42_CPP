/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:31:37 by sizgi             #+#    #+#             */
/*   Updated: 2026/03/10 16:31:37 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <list>
#include <deque>

template<typename T>
void easyfind(const T &param1, int param2) {
	typename T::const_iterator i = std::find(param1.begin(), param1.end(), param2);
	if (i != param1.end())
    	std::cout << std::distance(param1.begin(), i) << std::endl;
    else
		throw std::runtime_error("value doesnt exist in the container");
}
