/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:13:04 by sizgi             #+#    #+#             */
/*   Updated: 2026/04/18 16:14:48 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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