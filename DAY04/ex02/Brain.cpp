/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 20:51:57 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 22:30:20 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ()
{
    std::ostringstream  oss;

    for (int i = 0; i < 100; i++)
    {
        oss << i;
        ideas[i] = "idea" + oss.str();
    }
    std::cout << " Brain Has been created " << std::endl;
}

Brain::Brain (const Brain &other)
{
    *this = other;
    std::cout << " Brain Has been created " << std::endl;
}

Brain::~Brain()
{
    std::cout << " Brain Has been destroyed " << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    return (*this);
}