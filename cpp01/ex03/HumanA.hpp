/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaz-ca <vivaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:03:23 by vivaz-ca          #+#    #+#             */
/*   Updated: 2025/11/25 21:11:22 by vivaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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