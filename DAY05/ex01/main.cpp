/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:11:53 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/18 16:39:40 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat john(5 , "junior");
        Form taxForm("Tax Form", 3, 3);

        std::cout << john << std::endl;
        std::cout << taxForm << std::endl;

        std::cout << "====================================================" << std::endl;
        john.signForm(taxForm);
        std::cout << taxForm << std::endl;

        std::cout << "====================================================" << std::endl;
        Bureaucrat alice( 1, "senior");
        alice.signForm(taxForm);

    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
