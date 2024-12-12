/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:28:55 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/12 19:54:59 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie *p;

    p = NULL;
    p = newZombie ("Zombie111");
    p->announce ();
    randomChump ("Zombie222");
    randomChump ("Zombie333");
    randomChump ("Zombie444");
    delete p;
}