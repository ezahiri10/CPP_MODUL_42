/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:15:31 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/04 15:46:07 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



int main (int ac , char **av)
{
    if (ac  != 2)
    {
        std::cerr << "Invalid number of argument\n";
        return (1);
    }
    Harl().complain (av[1]);
}