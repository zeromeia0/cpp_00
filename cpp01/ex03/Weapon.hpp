/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaz-ca <vivaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:03:58 by vivaz-ca          #+#    #+#             */
/*   Updated: 2025/11/25 21:03:13 by vivaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <iomanip>

class Weapon{
	
	private:
		std::string type;
	
	public:
		Weapon() {};
		Weapon(const std::string& newType) : type(newType) {};
		~Weapon() {};
		const std::string& getType() const;
		void setType(const std::string& newType);
};

#endif