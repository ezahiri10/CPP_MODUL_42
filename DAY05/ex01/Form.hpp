/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:35:25 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/18 15:36:48 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
    private :
        std::string nameForm;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public :
        Form();
        Form(const Form &other);
        Form &operator= (const Form &other);
        ~Form();     
        Form (const std::string &name ,int gradeToSign, int gradeToExecute);
        std::string getName () const;
        bool getIsSigned() const;
        int getGradeTosign() const;
        int getGradeToExecute() const;
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
};

# endif