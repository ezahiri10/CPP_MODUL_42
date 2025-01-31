/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:04:54 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/18 16:11:11 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
    private :
        std::string name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        Bureaucrat(int grade, const std::string &name);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void GradeIncrement();
        void GradeDecrement();
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
        void signForm(Form &f);
};

std::ostream &operator<< (std::ostream &os, Bureaucrat &b);
std::ostream &operator<< (std::ostream &os, const Form &form);

#endif

