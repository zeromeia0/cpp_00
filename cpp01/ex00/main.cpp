/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaz-ca <vivaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:55:44 by vivaz-ca          #+#    #+#             */
/*   Updated: 2025/11/25 15:39:59 by vivaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "\nSummoning " << ZombieOneName << "\n";
	randomChump(ZombieOneName);

	std::cout << "\n";
	
	std::cout << "\nSummoning " << ZombieTwoName << "\n";
	Zombie *zombie2 = newZombie(ZombieTwoName);
	if (!zombie2)
	{
		std::cout << "Couldn't create it somewhy\n";
		return (1);
	}
	zombie2->announce();
	delete(zombie2);
	std::cout << "\n";
	return (0);
}