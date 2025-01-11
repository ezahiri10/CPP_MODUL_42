/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:17:38 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 20:46:36 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    this->size = 0;
    this->name = "";
    for (int i = 0; i < 4; i++)
            this->slots[i] = NULL;
    for (int i = 0; i < 4; i++)
            this->trash[i] = NULL;
}

Character::Character (const std::string &name)
{
    this->size = 0;
    this->name = name;
    for (int i = 0; i < 4; i++)
            this->slots[i] = NULL;
    for (int i = 0; i < 4; i++)
            this->trash[i] = NULL;
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
            size++;
            this->slots[i] = m;
            break ;
        }
    }
    if (size == 4)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->trash[i] != NULL)
                delete this->trash[i];
            this->trash[i] = NULL;
        }
        size = 0;
    }
}

void Character::unequip (int idx)
{
    if (idx < 0 || idx >= 4 || this->slots[idx] == NULL)
        return ;
    this->trash[size] = this->slots[idx];
    this->slots[idx] = NULL;
    size++;
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
        if (this->slots[i] != NULL)
            delete this->slots[i];
        if (this->trash[i] != NULL)
            delete this->trash[i];
    }
}

