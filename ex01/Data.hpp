/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:13:04 by sizgi             #+#    #+#             */
/*   Updated: 2026/02/17 16:40:33 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// struct Data {
// 		std::string name = "Laurence...Watkins";
// };

class Data {
	public:
		Data();
		~Data();
	private:
		Data(const Data &copyThis);
		Data &operator=(const Data &copyThis);
		// uintptr_t number;
		int number;
};