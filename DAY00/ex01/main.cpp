/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:45:07 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/07 15:48:30 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.hpp"

void print_menu()
{
    std::cout << "---------------------------------" << std::endl;
    std::cout << "|\t" << GREEN << "1 - ADD" << RESET << "\t\t\t|" << std::endl;
    std::cout << "|\t" << YELLOW << "2 - SEARCH" << RESET << "\t\t|" << std::endl;
    std::cout << "|\t" << RED << "3 - EXIT" << RESET << "\t\t|" << std::endl;
    std::cout << "---------------------------------\n\n" << std::endl;
}

void    SearchIndex ()
{
    PhoneBook& c = PhoneBook::getInstance();
    std::string input;
    int         i;

    if (c.get_size() == 0)
    {
        std::cout << RED << "No contact" << RESET << std::endl;
        return ;
    }
    c.ShowAll();
    while (true)
    {
        std::cout << GREEN << "Enter index : " << RESET;
        std::getline (std::cin, input);
        if (std::cin.eof())
            break ;
        i = Atoi (input);
        if (i >= 0 && i < c.get_size())
        {
            c.ShowContact(i);
            break;
        }
        else
            std::cout << RED << "Invalid index" << RESET << std::endl;
    }
}




void   CheckInput (Contact& c, std::string s, e_field field)
{
    if (field == FIRST_NAME)
        c.SetFirstName(s);
    else if (field == LAST_NAME)
        c.SetLastName(s);
    else if (field == NICK_NAME)
        c.SetNickName(s);
    else if (field == PHONE_NUMBER)
        c.SetNbrTele(s);
    else if (field == SECRET)
        c.SetSecret(s);
}

bool AfficheReqsuest(Contact& c , std::string request, e_field field)
{
    std::string  respond;

    std::cout << GREEN << request << RESET ;
    std::getline (std::cin, respond);
    if (std::cin.eof() || CheckInput (respond) == false 
        || (field == PHONE_NUMBER && !IsNumber(respond)))
        return (false);
    CheckInput (c, respond, field);
    return (true);
}

void    DataOfContatact()
{
    Contact add;

    if (!AfficheReqsuest(add, "Enter first name : ", FIRST_NAME))
        return ;
    if (!AfficheReqsuest(add, "Enter last name : ", LAST_NAME))
        return ;
    if (!AfficheReqsuest(add, "Enter nick name : ", NICK_NAME))
        return ;
    if (!AfficheReqsuest(add, "Enter phone number : ", PHONE_NUMBER))
        return ;
    if (!AfficheReqsuest(add, "Enter secret : ", SECRET))
        return ;
    PhoneBook::getInstance().AddContact(add);
}

void    check_oper(std::string command)
{
    if (command == "ADD")
        DataOfContatact ();
    else if (command == "SEARCH" )
        SearchIndex ();
    else if (command == "EXIT")
        exit(0);
    else if (std::cin.eof() == false)
        std::cout << RED << "Invalid command" << RESET << std::endl;
}

int main ()
{
    std::string command;

    print_menu();
    while (true)
    {
        if (std::cin.eof())
        {
            std::cout << YELLOW << "\nBye" << RESET << std::endl;
            return (0);
        }
        std::cout << BLUE << "Enter command : " << RESET;
        std::getline (std::cin, command);
        check_oper(command);
    }
}