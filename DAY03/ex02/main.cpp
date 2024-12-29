/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 15:33:19 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 13:27:59 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap fragTrap("Fraggy");

    fragTrap.attack("Enemy");
    fragTrap.takeDamage(50);
    fragTrap.beRepaired(25);
    fragTrap.attack("Enemy");
    fragTrap.takeDamage(100);
    fragTrap.highFivesGuys();   
	return 0;
}
