/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:03:07 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/24 13:45:36 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& other)
{
    static_cast<void>(other);
    return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    static_cast<void>(other);
}

ScalarConverter::ScalarConverter()
{}

static bool isInfNan(std::string &cv)
{
    int pos;

    pos = 3 + (cv == "inff");
    if (cv == "+inff" || cv == "-inff" || cv == "inff" || cv == "nanf")
        cv.erase(pos, 1); 
    return (cv == "-inf" || cv == "+inf" || cv == "nan" || cv == "inf");
}

static void validateArgument (std::string& cv)
{
    std::stringstream os;

    if (cv.empty() == true || cv == "-nan" || cv == "+nan" || cv == "-nanf" || cv == "+nanf")
        throw std::invalid_argument("invalid  arguments");
    if ((!isInfNan (cv) && std::isdigit(cv.at(0)) == false && cv.length() > 1 && cv.at(0) != '-'))
       throw std::invalid_argument("invalid  arguments");
    if (std::isdigit(cv.at(0)) == false && cv.length() == 1)
    {
        os << static_cast <int>(cv.at(0));
        cv = os.str();
    }
}

static double parseValue(std::string &cv)
{
    size_t idx;

    if (cv.at(cv.length() - 1) == 'f' && !isInfNan(cv))
        cv.erase(cv.length() - 1, 1);
    double number = std::stod (cv.c_str(), &idx);
    while (idx < cv.size())
    {
        if ((std::isspace(cv.at(idx)) == false))
            throw std::invalid_argument("invalid arguments");
        idx++;
    }
    if (isInfNan (cv) == false && (number > INT_MAX || number < INT_MIN))
        throw std::invalid_argument("invalid  arguments");
    return (number);
}

static void printConvertedValues (std::string &cv, double d)
{
    if (isInfNan(cv) == true)
    {
        std::cout << "char: " <<  "impossible" << std::endl;
        std::cout << "int:" <<  "impossible" << std::endl;
    }
    else if (std::isprint(static_cast <int>(d)) == false)
    {
        std::cout << "char: " << "Non displayable" << std::endl;
        std::cout << "int: " << static_cast <int>(d) << std::endl;
    }
    else  
    {
        std::cout << "char: " << "'" << static_cast <char>(d)  << "'" << std::endl;
        std::cout << "int: " << static_cast <int>(d) << std::endl;
    }
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast <float> (d) << "f" << std::endl;
    std::cout << "double: "<< std::fixed << std::setprecision(1) <<  static_cast <double> (d) << std::endl;
}
  
void ScalarConverter::convert(std::string cv)
{
    try {
        validateArgument(cv);
        double number = parseValue(cv);
        printConvertedValues(cv, number);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
        exit (1);
    }
}


ScalarConverter::~ScalarConverter()
{}

