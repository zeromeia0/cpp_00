/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaz-ca <vivaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:29:35 by vivaz-ca          #+#    #+#             */
/*   Updated: 2025/11/25 15:37:59 by vivaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iomanip>
# include <iostream>
# define ZombieOneName "Mourrice"
# define ZombieTwoName "Foo"

class Zombie{
	
	private:
		std::string name;
	
	public:
		Zombie(const std::string& name);
		~Zombie();
		void announce(void);
	};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif	