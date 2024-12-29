/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 20:51:57 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 21:40:44 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ()
{
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = "idea" + std::to_string (i);
    }
    std::cout << " Brain Has been created " << std::endl;
}

Brain::Brain (const Brain &other)
{
    *this = other;
    std::cout << " Brain Has been created " << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Has been destrued" << std::endl;
}
