/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvazzs <vvazzs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 12:22:58 by vvazzs            #+#    #+#             */
/*   Updated: 2025/11/22 16:04:45 by vvazzs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main()
{
    PhoneBook pb;
    std::string cmd;

    while (1)
    {
        std::cout << "Do you want to ADD, SEARCH, OR EXIT? ";
        std::getline(std::cin, cmd);
        
        if (cmd == "ADD")
            pb.AddContact();
        else if (cmd == "SEARCH")
            pb.DisplayAllContacts();
        else if (cmd == "EXIT")
            break;
        else
            std::cout << "Not a valid option\n";
    }
    return (0);
}
