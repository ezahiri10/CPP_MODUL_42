/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 12:06:16 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 18:34:26 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"

class Cure : public AMateria
{
    public :
        Cure ();
        Cure (const Cure &other);
        Cure &operator= (const Cure &other);
        ~Cure ();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif

