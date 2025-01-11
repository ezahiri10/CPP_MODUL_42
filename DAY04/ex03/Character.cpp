/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:17:38 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 18:41:44 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{}

Character::Character (const std::string &name)
{
    this->size = 0;
    this->name = name;
    for (int i = 0; i < 4; i++)
            this->slots[i] = NULL;
}


Character::Character (const Character &other)
{
    if (this != &other)
    {
        this->size = other.size;
        this->name = name;
        for (int i = 0; i < 4; i++)
            this->slots[i] = other.slots[i]->clone();
    }
}

Character &Character::operator=(const Character& other)
{
    if (this != &other)
    {
        this->size = other.size;
        this->name = name;
        for (int i = 0; i < 4; i++)
            this->slots[i] = other.slots[i]->clone();
    }
    return (*this);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i] == NULL)
        {
            this->slots[i] = m;
            break ;
        }
    }   
}

void Character::unequip (int idx)
{
    // delete this->slots[idx];
    this->slots[idx] = NULL;
}

std::string const & Character::getName () const
{
    return (name);
}

void Character::use(int idx, ICharacter &target)
{
    this->slots[idx]->use(target);
}

Character::~Character ()
{
    for (int i = 0; i < 4; i++)
    {
        // delete this->slots[i];
    }
}

