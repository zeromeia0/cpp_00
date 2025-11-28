/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeslin-ticiane <jeslinticianevaz@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:51:53 by jeslin-tici       #+#    #+#             */
/*   Updated: 2025/11/28 22:16:47 by jeslin-tici      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	if (!weapon)
		std::cout << name << " attacks with their one punch man punch \n";
	else
		std::cout << name << " attacks withe their " << weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon& thisWeapon)
{
	weapon = &thisWeapon;
}
