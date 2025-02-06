/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:30:01 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/06 21:32:14 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    throw std::invalid_argument("Error: could not open file.");
}

BitcoinExchange::BitcoinExchange(const std::string &NameFile) : NameFile(NameFile)
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy) : NameFile(cpy.NameFile)
{}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange& other)
{
    this->NameFile = other.NameFile;
    return(*this);
}

void BitcoinExchange::exchange()
{
    std::string line;
    std::ifstream ifile (this->NameFile.c_str());
    if (ifile.is_open() == false || std::getline(ifile, line).fail())
        std::runtime_error("Problem in opening file");
    Parser p;

    while (std::getline(ifile ,line))
    {
        try 
        {
            p.CheckForm(line);
            p.ParseDate();
            p.ParseDate();
            p.BankEmployee();
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    
}

BitcoinExchange::~BitcoinExchange()
{}

