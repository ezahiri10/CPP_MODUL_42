/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 23:30:08 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/24 16:24:48 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base::Base() {}

Base::Base(const Base &cpBase)
{
    *this = cpBase;
}

Base &Base::operator=(const Base &cpBase)
{
    (void)cpBase;
    return *this;
}
