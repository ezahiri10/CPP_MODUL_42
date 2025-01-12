/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:39:10 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 13:20:49 by ezahiri          ###   ########.fr       */
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
        ~Dog();
        Dog(const std::string &type);
        Dog &operator=(const Dog& other);
        void makeSound ( ) const;
        std::string getType ( void ) const;
};

#endif