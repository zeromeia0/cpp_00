/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeslin-ticiane <jeslinticianevaz@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 00:01:16 by jeslin-tici       #+#    #+#             */
/*   Updated: 2025/12/02 14:27:52 by jeslin-tici      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl1("Harl1");
	Harl harl2("Harl2");
	Harl harl3("Harl3");
	Harl harl4("Harl4");
	Harl harl5(NULL);
	Harl harl6("Harl6");
	harl1.complain("DEBBUG");
	harl2.complain("ERROR");
	harl3.complain("WARNING");
	harl4.complain("INFO");
	
	std::cout << "===AFTER BASIC TESTS===\n";
	harl5.complain("INFO");
	harl6.complain(NULL);

	return (0);
}