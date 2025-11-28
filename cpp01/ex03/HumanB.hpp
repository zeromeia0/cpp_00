/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeslin-ticiane <jeslinticianevaz@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:47:41 by jeslin-tici       #+#    #+#             */
/*   Updated: 2025/11/28 22:12:49 by jeslin-tici      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB (const std::string newName) : name(newName), weapon(NULL) {};
		HumanB(const std::string& newName, Weapon& thisWeapon) : name(newName), weapon(&thisWeapon) {};
		~HumanB() {};
		
		void setWeapon(Weapon& weapon);
		void attack();
			
};

#endif