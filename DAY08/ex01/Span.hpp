/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:10:23 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/03 18:04:24 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

class Span
{
    private :
        std::set<int> s;
        unsigned int N;
    public :
        Span();
        Span(const Span &cpy);
        Span(std::set<int>::const_iterator start,std::set<int>::const_iterator end);
        Span(unsigned int N);
        Span &operator= (const Span &other);
        void addNumber(int to_add);
        unsigned int longestSpan();
        unsigned int shortestSpan();
        ~Span();
};


#endif