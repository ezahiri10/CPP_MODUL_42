/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:15:29 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/13 20:26:09 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac , char **av)
{
    try
    {
        PmergeMe obj;
        obj.ParseV(ac, av);
        obj.SortV();
        obj.ParseD(ac, av);
        obj.SortD();
        obj.affichTime('v');
        obj.affichTime('d');
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (EXIT_FAILURE);
    }
    
}