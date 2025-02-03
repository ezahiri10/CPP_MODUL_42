/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:25:56 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/03 22:08:18 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <deque>

template <typename T, typename Container = std::deque<T>>

class MutantStack
{
    private :
        int __size;
        Container __stack;
    public :
       MutantStack ();
       MutantStack(const MutantStack<T, Container> & copy);
       MutantStack &operator=(const MutantStack<T, Container> &other);
       ~MutantStack ();
    //    void push (int a);
        bool empty() const;
        int size() const;
        T& top();
        const T& top() const;
        void push (const T& val);
        void pop();
        void swap (MutantStack& x) throw();
};

#include "MutantStack.tpp"