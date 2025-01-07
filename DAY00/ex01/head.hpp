/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 22:21:24 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/02 14:36:02 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

# include <iomanip>
# include "PhoneBook.hpp"
# include <cstdlib>
# define MAX_CONTACT 8
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define RESET "\033[0m"

typedef enum
{
    FIRST_NAME,
    LAST_NAME,
    NICK_NAME,
    PHONE_NUMBER,
    SECRET
}   e_field;


bool IsOnlySpaces(std::string& s);
bool IsPrintable(std::string& s);
bool IsNumber(std::string& s);
bool CheckInput (std::string& s);


#endif