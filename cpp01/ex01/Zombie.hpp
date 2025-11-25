/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaz-ca <vivaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:39:50 by vivaz-ca          #+#    #+#             */
/*   Updated: 2025/11/25 18:15:34 by vivaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iomanip>
# include <iostream>
# include <limits>
# include <cstdio>
# include <cctype>
# include <cstdlib>

 class Zombie{
 	private:
 		std::string name;
 	public:
		Zombie() {};
 		Zombie(const std::string &name);
 		~Zombie();
		void setName(const std::string &name);
		void DisplayNames(void);
 };
	
	Zombie* zombieHorde(int N, std::string name);	
#endif