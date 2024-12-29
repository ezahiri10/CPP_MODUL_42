/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:46:07 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 18:15:16 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << j->get_type() << " " << std::endl;
    std::cout << i->get_type() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound ();
    return 0;
}
