/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:29:40 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 19:01:59 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal 
{
    protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(WrongAnimal const & WrongAnimal);
        WrongAnimal & operator=(WrongAnimal const & WrongAnimal);
        ~WrongAnimal();
        WrongAnimal(std::string type);
        void makeSound( void ) const;
        std::string getType ( void ) const;
};

#endif