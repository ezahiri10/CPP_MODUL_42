/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:03:29 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/09 12:54:35 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_HPP
#define PARSER_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <algorithm>
#include <cstdlib> //strtod
#include <climits>

#define BADINPUT "Error: bad input => "
#define NOTPOSITIVE "Error: not a positive number."
#define TOOLARGE  "Error: too large a number."

class Parser
{
    private :
        std::string date;
        std::string value;
        std::string line;
        std::map<std::string, std::string> DataBase;
    public :
        Parser();
        Parser(const Parser & cpy);
        Parser &operator= (const Parser &other);
        std::string GetValue () const;
        std::string GetDate () const;
        void setDate (const std::string &Date);
        void setValue (const std::string &value);
        void CheckForm(const std::string &line);
        void ParseDate();
        void ParseValue();
        void BankEmployee();
        ~Parser();
    private :
        double StrToDouble (const std::string& s);
        std::string* split(const std::string& str, char delimiter);
        void IsValidDate(const std::string *tokens);
        bool IsLeapYear(int year);
        
};

#endif