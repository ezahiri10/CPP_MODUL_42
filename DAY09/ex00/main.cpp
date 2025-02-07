/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 21:27:23 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/07 11:11:34 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
    try {
        if (ac != 2)
            throw std::invalid_argument("Error: could not open file.");
        BitcoinExchange b(av[1]);
        b.exchange();
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}