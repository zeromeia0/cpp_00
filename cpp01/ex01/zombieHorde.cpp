/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaz-ca <vivaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:46:30 by vivaz-ca          #+#    #+#             */
/*   Updated: 2025/11/25 18:23:59 by vivaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N < 0)
		N = 0;

	Zombie *horde = new (std::nothrow) Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
		
	for (int i = 0; i < N; i++)
	{
		std::cout << i + 1 << " ";
		horde[i].DisplayNames();
		std::cout << " Is approaching!\n";
	}
	return (horde);
}