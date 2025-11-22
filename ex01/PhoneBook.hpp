/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvazzs <vvazzs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 12:23:01 by vvazzs            #+#    #+#             */
/*   Updated: 2025/11/22 18:40:19 by vvazzs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
        int count;
    public:
        Contact _contacts[8];
        PhoneBook() : count(0) {};
        
        void AddContact()
        {
            int index = count % 8;
            _contacts[index].SetInfo();
            count++;
        }
        void DisplayAllContacts() const
        {
            int n = count < 8 ? count : 8;
            std::cout << "\n*===============| CONTACTS |================*\n";
            std::cout << "|" << std::setw(10) << "Index"
                      << "|" << std::setw(10) << "FirstName"
                      << "|" << std::setw(10) << "LastName"
                      << "|" << std::setw(10) << "Nickname"
                      << "|\n";
            std::cout << "*-------------------------------------------*\n";
            for (int i = 0; i < n; i++)
                _contacts[i].DisplayGeneralContacts(i);
            std::cout << "*===========================================*\n\n";
        }
};

#endif
