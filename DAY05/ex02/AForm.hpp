/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:35:25 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/18 21:34:10 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm 
{
    private :
        std::string target;
        std::string nameForm;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public :
        AForm();
        AForm(const AForm &other);
        AForm &operator= (const AForm &other);
        ~AForm();
        AForm (const std::string &name ,int gradeToSign, int gradeToExecute, std::string& target);
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
        virtual void execute(Bureaucrat const & executor) const = 0;
};

# endif