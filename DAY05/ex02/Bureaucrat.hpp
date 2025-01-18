/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:04:54 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 00:15:32 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include "AForm.hpp"
#include <fstream>
#include <iostream>
#include <exception>

class AForm;

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
        void signForm(AForm &f);
        void executeForm(AForm const &form);
};

std::ostream &operator<< (std::ostream &os, Bureaucrat &b);
std::ostream &operator<< (std::ostream &os, const AForm &form);

#endif

