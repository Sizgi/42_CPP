/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:20:22 by sizgi             #+#    #+#             */
/*   Updated: 2026/01/21 14:40:55 by sizgi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>

class Harl
{
	private:
		void 	debug(void);
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		void	complain(std::string level);
		Harl();
		~Harl();
};

#endif