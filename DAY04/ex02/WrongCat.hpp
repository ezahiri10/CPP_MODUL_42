/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:39:10 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 18:57:43 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat const & src);
        WrongCat & operator=(WrongCat const & src);
        WrongCat(std::string type);
        void makeSound () const;
        std::string getType ( void ) const;
        
};

#endif