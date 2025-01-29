/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:54:49 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/23 22:27:12 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Number of argument invalid" << std::endl;
        return (1);
    }
    std::string s = av[1];
    ScalarConverter::convert(s);
}