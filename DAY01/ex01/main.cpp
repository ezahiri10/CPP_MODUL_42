/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:54:04 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/12 21:40:32 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int N;
    Zombie *arr;

    N = 10;
    arr = NULL;
    arr = zombieHorde (N, "Zombie");
    for (int i = 0; i < N; i++)
    {
        arr[i].announce ();
    }
    delete[] arr;   
}
