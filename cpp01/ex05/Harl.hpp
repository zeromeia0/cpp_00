/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeslin-ticiane <jeslinticianevaz@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 00:01:14 by jeslin-tici       #+#    #+#             */
/*   Updated: 2025/12/02 14:27:29 by jeslin-tici      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARD_HPP
#include <iostream>
#include <iomanip>

class Harl{
	private:
		std::string name;
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl() {};
		Harl(std::string newName) : name(newName) {}
		Harl(const char *check_name);
		~Harl() {};
		void complain(std::string level);
};

#endif