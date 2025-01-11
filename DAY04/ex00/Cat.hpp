/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:39:10 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 21:52:15 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(const Cat &cpy);
        Cat &operator=(const Cat &cpy);
        ~Cat();
        Cat(std::string type);
        void makeSound ();
        std::string get_type ( void ) const;
        
};