/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mm.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:12:21 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/18 15:28:14 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class B
{
    private:
        int b;
    public:
        B() = default;
};

class A
{
    private:
        B* b = new B();
    public:
        A() 
        {
            std::cout << (void *)b << std::endl;
        }
        ~A()
        {
            std::cout << "Destructor called" << std::endl;
            delete b;
        }
          A(const A& other) 
         {  
            b = new B(*(other.b));
            std::cout << "A copy constructor, b = " << (void*)b << std::endl;
        }
};

int main ()
{
   A a1;
   A a2  (a1);

    return 0;
}
