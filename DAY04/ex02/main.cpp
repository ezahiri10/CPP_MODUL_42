/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:46:07 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 23:25:25 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main ()
{
    Animal *A[4];

    for (int i = 0; i < 2; i++)
        A[i] = new Dog;
    for (int i = 2; i < 4 ; i++)
        A[i] = new Cat;
    for (int i = 0; i < 4; i++)
        A[i]->makeSound();
    for (int i = 0; i < 4 ; i++)
        delete A[i];
}