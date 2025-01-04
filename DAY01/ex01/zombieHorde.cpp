/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:05:30 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/04 14:48:37 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        {
            std::cerr << "invalid number \n";
            return (NULL);
        }
    Zombie *arr = new Zombie[N];

    for (int i = 0; i < N ; i++)
    {
        arr[i].set_name (name);
    }
    return (arr);
}