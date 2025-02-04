/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:10:23 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/04 15:02:19 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

class Span
{
    private :
        std::multiset<int> s;
        unsigned int N;
    public :
        Span();
        Span(const Span &cpy);
        Span(std::multiset<int>::const_iterator start,std::multiset<int>::const_iterator end);
        Span(unsigned int N);
        Span &operator= (const Span &other);
        void addNumber(int to_add);
        unsigned int longestSpan();
        unsigned int shortestSpan();
        ~Span();
};


#endif