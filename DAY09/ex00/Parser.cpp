/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:03:23 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/06 21:26:43 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"

Parser::Parser()
{
    std::ifstream ifile("data.csv");
    std::string *tokens;
    std::string line;
    int count;

    if (ifile.is_open() == false || std::getline(ifile, line).fail())
        throw std::runtime_error("Problem in Database");
    while (std::getline(ifile, line))
    {
        tokens = split (line, ',', count);
        this->DataBase[tokens[0]] = tokens[1];
        delete[] tokens;
    }
}

Parser::Parser (const Parser &cpy) : DataBase(cpy.DataBase)
{}

Parser& Parser::operator=(const Parser& other)
{
    this->DataBase = other.DataBase;
    return (*this);
}

bool Parser::IsLeapYear(int year) 
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void Parser::IsValidDate (const std::string *tokens)
{
    int year = StrToDouble(tokens[0]);
    int day = StrToDouble(tokens[2]);
    int months = StrToDouble(tokens[1]);
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (IsLeapYear(year) == true)
        days[1] += 1;
    if (year < 2009 || year > 9999 || months < 1 || months > 12 || day < 1 || day > days[months - 1]) 
        throw  std::invalid_argument(BADINPUT + this->line);
    if ((year == 2009 && months < 1) || (year == 2009 && months == 1 && day < 2))
        throw  std::invalid_argument(BADINPUT + this->line);
}

void Parser::ParseDate()
{
    this->value.erase(0, 1);
    this->date.erase(this->date.size() - 1, 1);
    if (std::count (this->date.begin() , this->date.end(), '-') != 2)
        throw  std::invalid_argument(BADINPUT + this->line);
    int a;
    std::string *tokens = this->split(this->date, '-', a);
    if (tokens[0].length() != 4 ||  tokens[1].length() != 2 || tokens[2].length() != 2)
        throw  std::invalid_argument(BADINPUT + this->line);
    IsValidDate(tokens);
}

void Parser::CheckForm(const std::string &line)
{
    this->line = line;
    if (std::count (line.begin (),line.end(), '|') != 1 || std::count (line.begin(), line.end(), ' ') != 2)
        throw  std::invalid_argument(BADINPUT + this->line);
    size_t pos = line.find('|');
    this->date = line.substr(0, pos);
    this->value = line.substr(pos + 1);
    if (this->date.at(this->date.length() - 1) != ' ' || this->value.at(0) != ' ')
        throw  std::invalid_argument(BADINPUT + this->line);
}

double Parser::StrToDouble(const std::string &s)
{
    char *end;
    double result = strtod(s.c_str(), &end);

    if (*end != '\0')
        throw  std::invalid_argument(BADINPUT + this->line);
    if (result > INT_MAX || result < INT_MIN)
        throw std::invalid_argument (TOOLARGE);
    if (result < 0)
        throw std::invalid_argument (NOTPOSITIVE);
        
    return (result);
}

std::string Parser::GetDate() const
{
    return (this->date);
}

std::string Parser::GetValue() const 
{
    return (this->value);
}

void Parser::setDate (const std::string &date)
{
    this->date = date;   
}

void Parser::setValue (const std::string &value)
{
    this->value = value;   
}


void Parser::ParseValue()
{
    double r = StrToDouble(this->value);
    if (r * 1 == 0 && this->value.find('-') != std::string::npos)
        throw std::invalid_argument(BADINPUT + this->line);
    if (r > 1000)
        throw std::invalid_argument(TOOLARGE);
}

void Parser::BankEmployee()
{
    std::map<std::string, std::string>::iterator it =  this->DataBase.lower_bound(this->date);

     if (it == this->DataBase.end())
        it--;
    std::cout << this->date << " => " << this->value << " = ";
    std::cout << StrToDouble(this->value) * StrToDouble(it->second) << std::endl;                                                                                                                             
}

// int main ()
// {
//     // int a;
//     // std::string *strs  = split ("salam |||| kalam", '|', a);

//     // std::cout << "a = " << a << std::endl;
//     // for (int i = 0; i < a; i++)
//     //     std::cout << "strs[] = " << strs[i] << std::endl;
    
    //Parser obj;

//     try {
//         obj.CheckForm ("2016-10-11 | 1");
//         obj.ParseDate();
//         obj.ParseValue();
//         obj.BankEmployee();
//     }
//     catch (std::exception &e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
// }
std::string* Parser::split(const std::string& str, char delimiter, int& count) 
{
    count = 1;
    for (size_t i = 0; i < str.length(); i++) 
    {
        if (str[i] == delimiter) 
            count++;
    }
    std::string* tokens = new std::string[count];
    size_t start = 0, end, index = 0;
    while ((end = str.find(delimiter, start)) != std::string::npos) {
        tokens[index++] = str.substr(start, end - start);
        start = end + 1;
    }
    tokens[index] = str.substr(start);
    return tokens;
}

Parser::~Parser()
{}