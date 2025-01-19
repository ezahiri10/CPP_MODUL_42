/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:40:33 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 10:22:24 by ezahiri          ###   ########.fr       */
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
        std::string nameForm;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator= (const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm (const std::string &name,const std::string& target);
        std::string getName () const;
        bool getIsSigned() const;
        int getGradeTosign() const;
        int getGradeToExecute() const;
        std::string getTarget () const;
        class GradeTooHighException : public std::exception
        {
            public :
                const char *what () const throw() ;
        };
        class GradeTooLowException : public std::exception
        {
            public :
                const char *what () const throw() ;
        };
        void beSigned(Bureaucrat &b);
        void execute(Bureaucrat const & executor) const;
};

# endif