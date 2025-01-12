/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:39:10 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 12:16:37 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *my_brean;
    public :
        Dog();
        Dog(Dog const &cpy);
        Dog &operator=(Dog const &other);
        ~Dog();
        Dog(std::string type);
        void makeSound () const;
        std::string getType ( void ) const;      
};

#endif