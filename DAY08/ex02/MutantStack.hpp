/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:25:56 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/04 13:00:50 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack <T>
{
    private :
        std::deque<T> mstack;
    public :
       MutantStack () 
       {
            this->mstack = this->c;
       }
       MutantStack(const MutantStack<T> & copy) : std::stack<T>(copy)
       {
        this->mstack = copy.mstack;
        this->mstack = copy.mstack;
       }
       MutantStack &operator=(const MutantStack<T> &other)
       {
            this->mstack = other.mstack;
            return (*this);
       }
       iterator begin()
       {
        return (this->mstack.begin());
       }
        iterator end()
       {
        return (this->mstack.end());
       }
       const_iterator begin() const
       {
        return (this->mstack.cbegin());
       }
       iterator end()
       {
         return (this->mstack.end());
       }
       const_iterator end() const
       {
        return (this->mstack.cend());
       }
       reverse_iterator rbegin()
       {
            return (this->mstack.rbegin());
       }
       const_reverse_iterator rbegin() const
       {
        return (this->mstack.crbegin())
       }
       reverse_iterator rend()
       {
        return (this->mstack.rend());
       }
       const_reverse_iterator rend() const
       {
        return (this->mstack.crend());
       }
       ~MutantStack ()
       {
            this->mstack.clear();
       }
};
    // //    void push (int a);
    //     bool empty() const;
    //     int size() const;
    //     T& top();
    //     const T& top() const;
    //     void push (const T& val);
    //     void pop();
    //     void swap (MutantStack& x) throw();
// };
