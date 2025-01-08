/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 15:33:19 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 14:52:32 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap dt("DiamondBoy");

    dt.attack("Enemy");
    dt.takeDamage(40);
    dt.beRepaired(20);
    dt.highFivesGuys();
    dt.guardGate();
    dt.whoAmI();

    return 0;
}
