/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:46:07 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 19:16:56 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    Animal* meta = new Animal();
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    std::cout << dog->get_type() << " " << std::endl;
    std::cout << cat->get_type() << " " << std::endl;

    cat->makeSound();  
    dog->makeSound();  
    meta->makeSound(); 
    WrongAnimal* wrongMeta = new WrongAnimal();
    WrongAnimal* wrongCat = new WrongCat();

    wrongCat->makeSound();
    wrongMeta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    delete wrongMeta;
    delete wrongCat;

    return 0;
}

