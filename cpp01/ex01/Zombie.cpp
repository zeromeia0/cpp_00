/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaz-ca <vivaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:43:08 by vivaz-ca          #+#    #+#             */
/*   Updated: 2025/11/25 18:22:16 by vivaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &newName) : name(newName)
{
	std::cout << "Caution, a horde of zombie has been detected!\n";
}

Zombie::~Zombie()
{
	std::cout << "Reporting to base camp, enemy down\n";
}
void Zombie::DisplayNames(void)
{
		std::cout << name;
}

void Zombie::setName(const std::string &newName)
{
	name = newName;
}