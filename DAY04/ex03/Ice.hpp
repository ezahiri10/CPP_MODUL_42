/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:48:38 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 18:34:08 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"

class Ice : public AMateria
{
    public :
        Ice ();
        Ice (const Ice &other);
        Ice &operator= (const Ice &other);
        ~Ice ();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
