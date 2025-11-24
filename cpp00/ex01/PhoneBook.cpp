/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvazzs <vvazzs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 12:22:58 by vvazzs            #+#    #+#             */
/*   Updated: 2025/11/24 07:23:32 by vvazzs           ###   ########.fr       */
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
        if (std::cin.eof())
        {
            std::cout << "\n";
            return (1);
        }
        if (cmd.empty())
        {
            // std::cout << "\n";
            // break ;
        }
        if (cmd == "ADD")
        {
            if (pb.AddContact() == 0)
                return (std::cout << "\n", 1);
        }
        else if (cmd == "SEARCH")
        {
            pb.DisplayAllContacts();
            int result = pb.DeepSearch();
            if (result == 0)
                return (std::cout << "\n", 1);
            else if (result != 1)
                continue ;
        }
        else if (cmd == "EXIT")
            break;
        else
            std::cout << "Not a valid option\n";
    }
    return (0);
}
