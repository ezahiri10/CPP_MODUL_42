/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:11:53 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 17:46:45 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {
    try 
    {
        Bureaucrat b("b", 1);
        Intern i;
        
        AForm* f =  i.makeForm("robotomy request", "XXXX");
        b.signForm(*f);
        b.executeForm(*f);
        delete f;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
