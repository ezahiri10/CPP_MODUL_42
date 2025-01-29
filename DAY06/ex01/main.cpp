/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:43:48 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/23 22:57:18 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
    Data *d = new Data;

    d->a = 10;
    d->b = 10;

    std::cout << "Address of d: " << d << std::endl;
    uintptr_t ptr1 = Serializer::serialize(d);
    d = Serializer::deserialize(ptr1);
    std::cout << "Address of d: " << d << std::endl;
    std::cout << "d->a: " << d->a << std::endl;
    std::cout << "d->b: " << d->b << std::endl;
    delete d;
    return 0;
}