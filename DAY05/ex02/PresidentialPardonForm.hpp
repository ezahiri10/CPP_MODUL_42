/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:42:03 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 00:19:10 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PresidentialPardonForm
#define PresidentialPardonForm

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    private :
        std::string nameForm;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm &operator= (const PresidentialPardonForm &other);
        ~PresidentialPardonForm();
        PresidentialPardonForm (const std::string &name, std::string& target);
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