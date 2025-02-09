/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:23:44 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/09 13:03:24 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cstdlib>
#include <sstream>

class  RPN
{
    private :
        std::stack<int> Stack;
    public :
        RPN();
        RPN (const RPN &cpy);
        RPN& operator=(const RPN &other);
        void RPNCalculter (const std::string &s);
        ~RPN();
    private :
        double StrToDouble(const std::string &s);
        bool IsOperator(int c);
        void Calculater(const std::string &tokens);
        
};

#endif