/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaz-ca <vivaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:34:19 by vivaz-ca          #+#    #+#             */
/*   Updated: 2025/11/25 15:49:21 by vivaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &newName) : name(newName)
{
	std::cout << "Zombie " << name << " Was Summoned!\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " Has finished its duties\n";
}
void Zombie::announce(void)
{
	std::cout << name << ":" << " BraiiiiiiinnnzzzZ...\n";
}