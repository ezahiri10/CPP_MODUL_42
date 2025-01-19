/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:11:53 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 21:33:28 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {
    try {
        Intern someRandomIntern;
        Bureaucrat boss("Boss", 1);


        AForm* shrubbery = someRandomIntern.makeForm("shrubbery creation", "Home");
        AForm* robotomy = someRandomIntern.makeForm("robotomy request", "Bender");
        AForm* pardon = someRandomIntern.makeForm("presidential pardon", "Marvin");

        AForm* invalidForm = someRandomIntern.makeForm("unknown form", "Target");
        if (shrubbery) {
            boss.signForm(*shrubbery);
            boss.executeForm(*shrubbery);
            delete shrubbery;
        }

        if (robotomy) {
            boss.signForm(*robotomy);
            boss.executeForm(*robotomy);
            delete robotomy;
        }

        if (pardon) {
            boss.signForm(*pardon);
            boss.executeForm(*pardon);
            delete pardon;
        }

        if (invalidForm) {
            delete invalidForm;
        }
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
