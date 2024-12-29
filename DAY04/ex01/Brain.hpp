/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 20:05:39 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 23:24:53 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define  BRAIN_HPP

#include <iostream>
#include <sstream>
class Brain 
{
    public :
        std::string ideas[100];
        Brain ();
        Brain (const Brain &other);
        Brain& operator=(const Brain& other);
        ~Brain ();
};

#endif