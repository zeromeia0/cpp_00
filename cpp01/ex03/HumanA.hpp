/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeslin-ticiane <jeslinticianevaz@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:03:23 by vivaz-ca          #+#    #+#             */
/*   Updated: 2025/11/28 21:58:53 by jeslin-tici      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{
	
	private:
		const std::string name;
		Weapon &weapon;
	public:
		HumanA(const std::string& name, Weapon& weapon);
		~HumanA() {};
		void attack();
};

#endif