/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:53:17 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/27 14:23:55 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> class Array
{
    private :
        T *__arry;
        unsigned int __size;
    public :
        Array ()
        {
            this->__arry = NULL;
            this->__size = 0;
        }
        Array (unsigned int n)
        {
            this->__arry = new T[n]();
            this->__size = n;
        }
        Array (const Array &other)
        {
            this->__size = other->__size;
            if (other->__size != 0)
            {
                this->__arry = new T[other.__size];
                for (int i = 0; i < other.__size; i++)
                    this->__arry = other.__arry[i];   
            }
            else
                this->__arry = NULL;
        }
        Array &operator=(const Array &other)
        {
            if (this == &other)
                return (*this);
            this->__size = other->__size;
            if (other->__size != 0)
            {
                this->__arry = new T[other.__size];
                for (int i = 0; i < other.__size; i++)
                    this->__arry = other.__arry[i];
                delete[] other.__arry;
            }
            else
                this->__arry = NULL;
        }
        T &operator [](unsigned int index)
        {
            if (index > this->__size)
                throw std::out_of_range("Index out of bounds");
            return this->__arry[index];
        }
        ~Array ()
        {
            delete[] this->__arry;
        }
        
};