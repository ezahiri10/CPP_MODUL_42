/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:42:43 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/14 22:43:21 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

int main()

{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
