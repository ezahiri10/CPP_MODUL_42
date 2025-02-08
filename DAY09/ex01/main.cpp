/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 23:19:20 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/08 23:23:21 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int ac , char **av)
{
    try {
        if (ac != 2)
            throw std::invalid_argument ("Error");
        RPN obj;
        obj.RPNCalculter(av[1]);

    }
    catch(std::exception &e)
    {
        std::cerr << e.what () << std::endl;
        return (1);
    }
}