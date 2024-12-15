/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:54:28 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/15 16:07:50 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() 
{
    Harl harl;

    std::cout << "Harl's complaints:" << std::endl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    std::cout << "\nTesting an unknown level:" << std::endl << std::endl;
    harl.complain("SILENT");

    return 0;
}