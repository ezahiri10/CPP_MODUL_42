/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:59:43 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/23 22:05:41 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <sstream>
#include <stdexcept>
#include <limits>
#include <cmath>

class ScalarConverter
{
    private :
        ScalarConverter();
    public :
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator= (const ScalarConverter &other);
        static void convert  (std::string cv);
};