/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 22:29:37 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/03 20:55:50 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string& stringREF = s;

    std::cout << "• The memory address of the string variable is : " << &s << std::endl;
    std::cout << "• The memory address held by stringPTR is : " << stringPTR << std::endl;
    std::cout << "• The memory address held by stringREF is : " << &stringREF  << std::endl;
    
    std::cout << "• The value of the string variable is : " << s << std::endl;
    std::cout << "• The value pointed to by stringPTR is : " << *stringPTR << std::endl;
    std::cout << "• The value pointed to by stringREF is : " << stringREF << std::endl;
     
}