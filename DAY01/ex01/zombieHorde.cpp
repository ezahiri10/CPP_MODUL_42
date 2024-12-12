/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:05:30 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/12 22:05:44 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *arr = new Zombie[N];
    std::string new_name = name;
    std::stringstream ss;

    for (int i = 0; i < N ; i++)
    {
        ss << i;
        new_name .append ( ss.str());
        ss.str ("");
        // ss.clear ();
        arr[i].get_name (new_name);
        new_name = name;
    }
    return (arr);
}