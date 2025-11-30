/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeslin-ticiane <jeslinticianevaz@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 00:01:14 by jeslin-tici       #+#    #+#             */
/*   Updated: 2025/11/30 20:37:00 by jeslin-tici      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARD_HPP
#include <iostream>
#include <iomanip>

class Harl{
	private:
		void debug(void);
		void indo(void);
		void warning(void);
		void error(void);
	public:
		Harl() {};
		~Harl() {};
		void complain(std::string level);
};

#endif