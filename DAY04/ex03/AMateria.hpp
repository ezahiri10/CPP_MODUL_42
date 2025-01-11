/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 10:43:15 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 16:20:35 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(const AMateria& other);
        AMateria(std::string const & type);
        AMateria& operator= (const AMateria& other);
        ~AMateria();
        std::string const & getType() const; 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif