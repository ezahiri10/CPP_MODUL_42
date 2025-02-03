/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:07:13 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/03 22:07:37 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque>

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
    this->__size = 0;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container>& other)
{
    this->__stack = other.__stack;
    this->__size = other.__size;
}

template <typename T, typename Container>
bool MutantStack<T, Container>::empty()
{
    return (this->__size == 0);
}


template <typename T, typename Container>
int MutantStack<T, Container>::size()
{
    return (this->__size);
}

template <typename T, typename Container>
T& MutantStack<T, Container>::top()
{
    return (this->__stack.at(size - 1));
}

template <typename T, typename Container>
const T& MutantStack<T, Container>::top() const
{
    if (size != 0)
        return (this->__stack.at(size - 1));
    return (0);
}

template <typename T, typename Container>
void MutantStack<T, Container>::pop()
{
    if (size != 0)
        this->__stack.erase(size - 1);
}

template <typename T, typename Container>
void MutantStack<T, Container>::swap () throw()
{
    Container    tmp = *this;
    *this = x;
    x = 
}