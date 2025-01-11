/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:42:09 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 21:52:43 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(const Dog &cpy);
        Dog &operator=(const Dog &cpy);
        ~Dog();
        Dog(std::string type);
        void makeSound ();
        std::string get_type ( void ) const;
        
};