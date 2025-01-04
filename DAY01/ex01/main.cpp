/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:54:04 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/04 14:49:06 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie *arr = zombieHorde (-1 ,"Zombie" );
    if (arr == NULL)
        return (1);
    for (int i = 0; i < 10; i++)
    {
        arr[i].announce ();
    }
    delete[] arr;
}
