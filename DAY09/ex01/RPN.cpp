/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:34:33 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/08 23:25:43 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

double RPN::StrToDouble(const std::string &s)
{
    char *end;
    double result = strtod(s.c_str(), &end);
    
    if (*end != '\0')
        throw std::invalid_argument ("Error");
    if (result > 9)
        throw std::invalid_argument ("Error");
    if (result < 0)
        throw std::invalid_argument ("Error");
    return (result);
}
bool RPN::IsOperator(int c)
{
    return (c == '+' || c == '-' || c == '/' || c == '*');
}

RPN::RPN()
{}

RPN::RPN(const RPN &cpy) : Stack(cpy.Stack)
{}

RPN &RPN::operator=(const RPN &cpy)
{
    this->Stack = cpy.Stack;
    return (*this);
}
void RPN::Calculater(const std::string &tokens)
{
     if (Stack.size() < 2)
            throw std::invalid_argument ("Error");
    int a = this->Stack.top();
    this->Stack.pop();
    int b = this->Stack.top();
    this->Stack.pop();
    if (tokens == "+")
        this->Stack.push(a + b);
    else if (tokens == "-")
        this->Stack.push(b - a);
    else if (tokens == "*")
        this->Stack.push(a * b);
    else if (tokens == "/")
    {
        if (a == 0)
            throw std::invalid_argument ("Error");
        this->Stack.push(b / a);
    }
}

void RPN::RPNCalculter (const std::string &s)
{
    if (s.find_first_not_of("+-/* 0123456789") != std::string::npos)
        throw std::invalid_argument ("Error");
    std::string tokens;
    std::istringstream is(s);
    
    while (is >> tokens)
    {
        if (tokens.find_first_of ("0123456789") != std::string::npos)
            this->Stack.push(StrToDouble(tokens));
        else if (tokens.find_first_of ("+-/*") != std::string::npos)
            Calculater(tokens);
    }
    if (this->Stack.size() != 1)
        throw std::invalid_argument ("Error");
    std::cout << this->Stack.top() << std::endl;
}


RPN::~RPN()
{}

