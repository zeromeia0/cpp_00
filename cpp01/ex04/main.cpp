/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeslin-ticiane <jeslinticianevaz@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 22:26:32 by jeslin-tici       #+#    #+#             */
/*   Updated: 2025/11/28 22:39:43 by jeslin-tici      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notLosers.hpp"


int main(int argc, char *argv[])
{
	if (argc != 4 || argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
		return (1);
	std::cout << "Filename = " << argv[1] << std::endl;
	std::cout << "S1 = " << argv[2] << std::endl;
	std::cout << "S2 = " << argv[3] << std::endl;
	std::ifstream myFile(argv[1]);
	if (!myFile)
		return (std::cout << "Error: File not found\n", 1);
	std::cout << "vini\n";
	return (0);
	
}