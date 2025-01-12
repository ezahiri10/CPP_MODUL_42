/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:42:09 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 10:48:54 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(const Dog &cpy);
        Dog &operator=(const Dog &cpy);
        ~Dog();
        Dog(std::string type);
        void makeSound () const;
        std::string getType ( void ) const;
        
};

#endif