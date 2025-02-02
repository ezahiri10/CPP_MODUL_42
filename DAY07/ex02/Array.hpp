/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:53:17 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/27 22:17:16 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

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
            this->__size = other.__size;
            if (other.__size != 0)
            {
                this->__arry = new T[other.__size];
                for (unsigned int i = 0; i < other.__size; i++)
                    this->__arry[i] = other.__arry[i];   
            }
            else
                this->__arry = NULL;
        }
        Array &operator=(const Array &other)
        {
            if (this == &other)
                return (*this);
            delete[] this->__arry; 
            this->__size = other.__size;
            if (other.__size != 0)
            {
                this->__arry = new T[other.__size];
                for (unsigned int i = 0; i < other.__size; i++)
                    this->__arry[i] = other.__arry[i];
            }
            else
                this->__arry = NULL;
            return (*this);
        }
        T &operator [](unsigned int index)
        {
            if (index >= this->__size)
                throw std::out_of_range("Index out of bounds");
            return this->__arry[index];
        }
        const  T &operator [](unsigned int index) const
        {
            if (index >= this->__size)
                throw std::out_of_range("Index out of bounds");
            return this->__arry[index];
        }
        unsigned int size()
        {
            return (this->__size);
        }
        ~Array ()
        {
            delete[] this->__arry;
        }
        
};


#endif