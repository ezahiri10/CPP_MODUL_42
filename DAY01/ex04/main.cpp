/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:22:25 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/16 12:18:32 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void Interpreter (std::string buffer, std::string name, std::string to_find, std::string to_replace)
{
    int pos = 0;
    
    pos = buffer.find (to_find, pos);
    while (pos != (int)std::string::npos)
    {
        buffer.erase (pos, to_find.length());
        buffer.insert (pos, to_replace);
        pos += to_replace.length();
        pos = buffer.find (to_find, pos);
    }
    std::ofstream outfile ((name + ".replace").c_str());
    if (!outfile.is_open ())
    {
        std::cerr << "Error opening file for reading." << std::endl;
        exit(1);
    }
    
    outfile << buffer;
    outfile.close ();
}

std::string GetFileContent (std::string filename)
{
    std::stringstream buff;
    std::ifstream infile (filename.c_str());
    
    if (!infile.is_open ())
    {
        std::cerr << "Error opening file for reading." << std::endl;
        exit(1);
    }
    buff << infile.rdbuf ();
    infile.close ();
    return (buff.str());
}

int main (int ac , char **av)
{
    std::string buff;

    if (ac != 4 || av[2][0] == '\0')
    {
        std::cerr << "Invalid input" << std::endl;
        return (1);
    }
    buff = GetFileContent (av[1]);
    Interpreter (buff, av[1], av[2], av[3]);
}