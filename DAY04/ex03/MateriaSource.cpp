/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 15:49:23 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 18:42:05 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){};

MateriaSource::MateriaSource(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
            this->sourcs[i] = other.sourcs[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
            this->sourcs[i] = other.sourcs[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        // delete this->sourcs[i];
    }
}

void MateriaSource::learnMateria (AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->sourcs[i] == NULL)
        {
            this->sourcs[i] = m;
            break ;
        }
    }
}

AMateria *MateriaSource::createMateria (std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (type == this->sourcs[i]->getType ())
            return (this->sourcs[i]->clone());
    }
    return (NULL);
}