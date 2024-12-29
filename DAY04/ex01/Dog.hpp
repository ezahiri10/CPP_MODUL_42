/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:42:09 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 18:10:50 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        ~Dog();
        Dog(std::string type);
        void makeSound ();
        std::string get_type ( void ) const;
        
};