/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvazzs <vvazzs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 12:34:05 by vvazzs            #+#    #+#             */
/*   Updated: 2025/11/22 21:24:29 by vvazzs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cctype>

int    str_digit(std::string s)
{
    int i = 0;
    if (s.empty())
        return (1);
    while (s[i])
    {
        if (!std::isdigit(s[i]))
            return (1);
        i++;
    }
    return (0);
}
std::string InputValidation(const std::string &prompt)
{
    std::string input;

    while (1)
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Can't have empty information :)\n";
        else
            break ;
    }
    return (input);
}
void Contact::SetInfo(void)
{
    
    FirstName = InputValidation("Insert first name: ");
    LastName = InputValidation("Insert last name: ");
    Nickname = InputValidation("Insert nickname: ");
    while (1)
    {
        PhoneNumber = InputValidation("Insert phone number: ");
        if (str_digit(PhoneNumber) != 0)
        {
            std::cout << "Only digits allowed\n";
            continue;
        }
        else if (PhoneNumber.size() < 7 || PhoneNumber.size() > 12)
        {
            std::cout << "Phone number must be betwwen 8 and 11 digits :)\n";
            continue ;
        }
        else
            break ;
    }
    DarkestSecret = InputValidation("Insert darkest secret: ");
}

std::string Contact::FormatBook(std::string s) const
{
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    return (s);
}

void Contact::DisplayGeneralContacts(int index) const
{
    std::cout << "|" 
              << std::setw(10) << index << "|"
              << std::setw(10) << FormatBook(FirstName) << "|"
              << std::setw(10) << FormatBook(LastName) << "|"
              << std::setw(10) << FormatBook(Nickname) << "|\n";
}