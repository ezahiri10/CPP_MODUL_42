/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:21:14 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/04 14:59:43 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0)
{}

Span::Span(const Span &cpy)
{
    this->N = cpy.N;
    this->s = cpy.s;
}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span &Span::operator= (const Span &other)
{
    this->N = other.N;
    this->s = other.s;
    return (*this);
}

void Span::addNumber(int to_add)
{
    if (this->s.size() == N)
        throw std::out_of_range("there are already N elements stored");
    this->s.insert(to_add);
}

unsigned int Span::longestSpan()
{

    if (this->s.size() == 0 || this->s.size() == 1)
        throw std::logic_error(" there are no numbers stored or only one");
    return (*(this->s.rbegin()) - *(s.begin()));
}

unsigned int Span::shortestSpan()
{
    if (this->s.size() == 0 || this->s.size() == 1)
        throw std::logic_error(" there are no numbers stored or only one");

    std::multiset<int> tmp;
    for (std::multiset<int>::iterator it = this->s.begin(); it != (--this->s.end()); it++)
        tmp.insert(*(++it) -  *(--it));
    return(*(tmp.begin()));
}

Span::Span(std::multiset<int>::const_iterator start,std::multiset<int>::const_iterator end)
{
    while (start != end)
    {
        this->addNumber (*start);
        start++;
    }
}
Span::~Span()
{
    this->s.clear();
}

