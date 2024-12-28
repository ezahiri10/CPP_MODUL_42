/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:16:18 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/28 19:18:37 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap clap("CL4P-TP");

    clap.attack("target1");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("target2");
    clap.takeDamage(10);
    clap.beRepaired(5);

    return 0;
}
