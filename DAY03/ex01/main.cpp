/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 15:33:19 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 12:19:57 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap clap("CL4P-TP");

    clap.attack("target1");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("target2");
    clap.takeDamage(10);
    clap.beRepaired(5);
    return 0;
}
