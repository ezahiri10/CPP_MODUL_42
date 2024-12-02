/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:10:49 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/02 20:49:44 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void print_menu()
{
    std::cout << "1. ADD" << std::endl;
    std::cout << "2. SEARCH" << std::endl;
    std::cout << "3. EXIT" << std::endl;
} 

void PhoneBook::set_size(int i)
{
    size = i;
}

void PhoneBook::set_index(int i)
{
    index = i;
}

int PhoneBook::get_size()
{
    return (size);
}

Contact  PhoneBook::GetContact(int i)
{
    return (contacts[i]);
}

std::string FixedLength(std::string s)
{
    if (s.length() > 10)
    {
        s.resize(9);
        s += ".";
    }
    return (s);
}

void   PhoneBook::ShowAll()
{
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw (10) << FixedLength (contacts[i].GetFirstName()) << "|";
        std::cout << std::setw (10) << FixedLength (contacts[i].GetLastName()) << "|";
        std::cout << std::setw (10) << FixedLength (contacts[i].GetNickName()) << std::endl;
    }
}

void PhoneBook::AddContact(Contact add)
{
    contacts[index] = add;
    index++;
    if (size != 8)
        size++;
    if (index == 8)
        index = 0;
}

long Atoi (std::string s)
{
    long    res = 0;
    int     i = 0;
    int     sign = 1;

    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }
    while (s[i] != '\0')
    {
        if (s[i] < '0' || s[i] > '9')
            return (-1);
        res = res * 10 + s[i] - '0';
        i++;
    }
    return (res * sign);
}

void    SearchIndex (PhoneBook& c)
{
    int         i;
    std::string input;

    if (c.get_size() == 0)
    {
        std::cout << "No contact" << std::endl;
        return ;
    }
    c.ShowAll();
    while (1)
    {
        std::cout << "Enter index : ";
        std::getline (std::cin, input);
        i = Atoi (input);
        if (i >= 0 && i < c.get_size())
        {
            std::cout << "First name : " << c.GetContact(i).GetFirstName() << std::endl;
            std::cout << "Last name : " << c.GetContact(i).GetLastName() << std::endl;
            std::cout << "Nick name : " << c.GetContact(i).GetNickName() << std::endl;
            std::cout << "Phone number : " << c.GetContact(i).GetNbrTele() << std::endl;
            break;
        }
        else
            std::cout << "Invalid index" << std::endl;
    }
}

bool IsOnlySpaces(std::string s)
{
    for (int i = 0; s[i] != 0; i++)
    {
        if (s[0] != ' ')
        {
            return (false);
        }
    }
    return (true);
}

bool IsPrintable(std::string s)
{
    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] < 32 || s[i] > 126)
        {
            return (false);
        }
    }
    return (true);
}

bool IsNumber(std::string s)
{
    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            std::cout << "Invalid phone number\n";
            return (false);
        }
    }
    return (true);
}

bool   CheckInput (std::string s)

{
    if (IsOnlySpaces (s) == true || s.empty() == true || IsPrintable(s) == false)
    {
        std::cout << "Invalid input\n";
        return (false);
    }
    return (true);
}

void DataOfContatact (PhoneBook& c)
{
    Contact add;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string secret;

    if (std::cin.eof() || CheckInput (first_name) == false)
        return ;
    add.SetFirstName(first_name);
    std::cout << "Enter last name : ";
    std::getline (std::cin, last_name);
    if (std::cin.eof () ||  CheckInput (last_name) == false)
        return ;
    add.SetLastName(last_name);
    std::cout << "Enter nick name : ";
    std::getline (std::cin, nick_name);
    if (std::cin.eof () ||  CheckInput (nick_name) == false)
        return ;
    add.SetNickName(nick_name);
    std::cout << "Enter phone number : ";
    std::getline (std::cin, phone_number);
    if (std::cin.eof () ||  !CheckInput (phone_number) || !IsNumber (phone_number))
        return ;
    add.SetNbrTele(phone_number);
    std::cout << "Enter secret : ";
    std::getline (std::cin, secret);
    add.SetSecret(secret);
    c.AddContact(add);
}

void    check_oper(std::string command, PhoneBook& c)
{
    if (command == "ADD")
        DataOfContatact (c);
    else if (command == "SEARCH" )
        SearchIndex (c);
    else if (command == "EXIT")
        exit(0);
    else
        std::cout << "Invalid command" << std::endl;
}

int main ()
{
    PhoneBook c;
    std::string command;

    c.set_index(0);
    c.set_size(0);
    print_menu();
    while (1)
    {
        std::cout << "enter your opertion : ";
        std::getline (std::cin, command);
        if (std::cin.eof())
        {
            std::cout << "Gooooood bye" << std::endl;
            break ;
        }
        check_oper(command, c);
    }
}

//     "     " --> NO

//  "/t"   (\t==="    ")
// "at least one  printable char " --> is not valid
// just numbers in phone number 