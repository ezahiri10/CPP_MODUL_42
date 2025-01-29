/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:40:33 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 14:39:05 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
    private :
        std::string target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator= (const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm (const std::string& target);
        std::string getTarget () const;
        class FileNotOpenedException : public std::exception
        {
            public :
                const char *what () const throw() ;
        };
        void execute(Bureaucrat const & executor) const;
};

# endif