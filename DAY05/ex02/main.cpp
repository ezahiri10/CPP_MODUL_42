/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:11:53 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 14:35:02 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int main() {
    try 
    {
       Bureaucrat b("b", 1);
        ShrubberyCreationForm s("home");
        PresidentialPardonForm p("home");
        RobotomyRequestForm r("home");

        std::cout << "==============================================================" << std::endl;
        // b.signForm(s);
        b.executeForm(s);
        std::cout << "==============================================================" << std::endl;
        b.signForm(p);
        b.executeForm(p);
        std::cout << "==============================================================" << std::endl;
        b.signForm(r);
        b.executeForm(r);
        std::cout << "==============================================================" << std::endl; 
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
