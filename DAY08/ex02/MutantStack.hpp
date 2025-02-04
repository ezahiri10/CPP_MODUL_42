/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:25:56 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/04 20:02:08 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack <T, C>
{
    public :
          MutantStack () 
          {}
          MutantStack(const MutantStack<T, C> & copy) : std::stack<T, C>(copy)
          {}
          MutantStack &operator=(const MutantStack<T> &other)
          {
               std::stack<T, C>::operator=(other);
               return (*this);
          }
          class iterator 
          {
               private :
                    typename C::iterator it;
               public :
                    iterator()
                    {}
                    iterator(const iterator &cpy)
                    {
                         this->it = cpy.it;
                    }
                    iterator (const typename C::iterator &it)
                    {
                         this-> it = it;
                    }
                    iterator &operator=(const iterator &other)
                    {
                         this->it = other.it;
                         return (*this);
                    }
                    T &operator*()
                    {
                         return (*it);
                    }
                    iterator &operator++()
                    {
                         it++;
                         return (*this);
                    }
                    bool operator== (const iterator &other) const
                    {
                         return (this->it == other.it);
                    }
                    bool operator!= (const iterator &other) const
                    {
                         return (this->it != other.it);
                    }
                    iterator &operator++(int)
                    {
                         iterator tmp = *this;
                         this->it++;
                         return (tmp);
                    }
                    iterator &operator--()
                    {
                         it--;
                         return (*this);
                    }
                    iterator &operator--(int)
                    {
                         iterator tmp = *this;
                         this->it--;
                         return (tmp);
                    }
                    ~iterator()
                    {}
                    
          };
     iterator begin()
     {
          return iterator (this->c.begin());
     }
     iterator end()
     {
          return iterator (this->c.end());
     }
     ~MutantStack ()
     {}
};

#endif