/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 20:05:39 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 22:32:28 by ezahiri          ###   ########.fr       */
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