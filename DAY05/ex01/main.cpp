/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:11:53 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/18 15:46:31 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main ()
{
    try {
       Bureaucrat b(9, "Pro"); 
       Form f1("form1", 10, 3);
       f1.beSigned(b);
       b.signForm(f1);
    //    std::cout << "finish" << std::endl;
    }
    catch (const std::exception &p)
    {
        std::cout << p.what () << std::endl;
        return (0);
    }
}