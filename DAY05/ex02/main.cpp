/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:11:53 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 11:40:43 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int main() {
    try {
       AForm *f[3];

       f[0] = new ShrubberyCreationForm("shrubbery", "target");
    //    f[1] = new PresidentialPardonForm;
    //    f[2] = new RobotomyRequestForm;

         Bureaucrat b(1 , "b1");
    
    b.signForm(*f[0]);
    b.executeForm(*f[0]);
    // std::cout << "======================" << std::endl;
    std::cout << *f[0] << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
