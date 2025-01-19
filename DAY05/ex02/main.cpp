/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:11:53 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 11:49:17 by ezahiri          ###   ########.fr       */
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
        ShrubberyCreationForm s("s", "target");
        PresidentialPardonForm p("p", "target");
        RobotomyRequestForm r("r", "target");

        b.signForm(s);
        b.signForm(p);
        b.signForm(r);

        b.executeForm(s);
        b.executeForm(p);
        b.executeForm(r);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
