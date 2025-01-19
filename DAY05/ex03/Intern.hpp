/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:38:09 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 17:23:53 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

class Intern
{
    public :
        AForm *makeForm(const std::string &name, const std::string &form);
        Intern();
        Intern(const Intern &other);
        Intern &operator= (const Intern &other);
        ~Intern();
        class UnkownFormException : public std::exception
            {
            public :
                const char *what () const throw() ;
        };
};
