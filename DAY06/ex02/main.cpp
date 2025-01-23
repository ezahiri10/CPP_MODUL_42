/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 23:38:47 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/23 23:52:21 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    time_t t;

    t = time(NULL) % 100;

    switch (t % 3)
    {
    case 0:
        return (new A);
        break;
    case 1:
        return (new B);
        break ;
    default:
        return (new C);
        break;
    } 
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p) != nullptr)
        std::cout << " A " << std::endl;
    else if (dynamic_cast<B *>(p) != nullptr)
        std::cout << " B " << std::endl;
    else if (dynamic_cast<C *>(p) != nullptr)
        std::cout << " C " << std::endl;
    else 
        std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
    try {
        (void)dynamic_cast <A &>(p);
    }
    catch (std::exception &e)
    {
        (void)e;
        std::cout << " A" << std::endl;
        return ;
    }
    try {
        (void)dynamic_cast <B &>(p);
    }
    catch (std::exception &e)
    {
        (void)e;
        std::cout << " B" << std::endl;
        return ;
    }
    try {
        (void)dynamic_cast <C &>(p);
    }
    catch (std::exception &e)
    {
        (void)e;
        std::cout << " C" << std::endl;
        return ;
    }
    
}
int main()
{
    Base *base = generate();
    identify(base);
    identify(*base);
    return 0;
}

