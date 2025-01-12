/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:39:10 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 10:43:41 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(const Cat &cpy);
        Cat &operator=(const Cat &cpy);
        ~Cat();
        Cat(std::string type);
        void makeSound () const;
        std::string getType ( void ) const;
        
};

#endif