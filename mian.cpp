#include <iostream>

//inheritance

class BASE
{
    public :
        int a;
        BASE() : a(0)
        {
            std::cout << "BASE constructor" << std::endl;
        }
        ~BASE()
        {
            std::cout << "BASE destructor" << std::endl;
        }
        BASE (const BASE &other)
        {
            std::cout << "BASE copy constructor" << std::endl;
            *this = other;
        }
        BASE &operator= (const BASE &other)
        {
            std::cout << "BASE operator=" << std::endl;
            this->a = other.a;
            return (*this);
        }
};

class A
{
    public :
        int a;
        A() : a(0)
        {
            std::cout << "A constructor" << std::endl;
        }
        ~A()
        {
            std::cout << "A destructor" << std::endl;
        }
        A (const A &other)
        {
            std::cout << "A copy constructor" << std::endl;
            *this = other;
        }
        A &operator= (const A &other)
        {
            std::cout << "A operator=" << std::endl;
            this->a = other.a;
            return (*this);
        }
};

class B
{
    public :
        int a;
        B() : a(0)
        {
            std::cout << "B constructor" << std::endl;
        }
        ~B()
        {
            std::cout << "B destructor" << std::endl;
        }
        B (const B &other)
        {
            std::cout << "B copy constructor" << std::endl;
            *this = other;
        }
        B &operator= (const B &other)
        {
            std::cout << "B operator=" << std::endl;
            this->a = other.a;
            return (*this);
        }
};

int main ()
{
    A a;
}