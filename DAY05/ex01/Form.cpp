/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:46:05 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/18 16:25:11 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : nameForm("default") , isSigned(false) , gradeToSign(0) , gradeToExecute(0)
{}

Form::Form(const Form &other) :  nameForm(other.nameForm) , isSigned(other.isSigned) , gradeToSign(other.gradeToSign) , gradeToExecute(other.gradeToExecute)
{}

Form &Form::operator= (const Form &other)
{
    new (this) Form(other);
    return (*this);
}

std::string Form::getName() const
{
    return (this->nameForm);
}

bool Form::getIsSigned() const
{
    return (this->isSigned);
}

int Form::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

int Form::getGradeTosign () const
{
    return (this->gradeToSign);   
}

const char *Form::GradeTooHighException::what () const throw()
{
    return ("Form grade is too high!");
}

const char *Form::GradeTooLowException::what () const throw()
{
    return ("Form grade is too low!");
}

Form::Form (const std::string &name, int gradeToSign, int gradeToExecute) : nameForm(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException ();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException ();
}

void Form::beSigned (Bureaucrat &b)
{
    if (b.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    else
        isSigned = true;
}


std::ostream &operator<< (std::ostream &os, const Form &form)
{
    os << "Form " << form.getName() << " (signed: ";
    os << (form.getIsSigned() ? "yes" : "no") ;
    os << ", grade required to sign: " << form.getGradeTosign() ;
    os  << ", grade required to execute: " << form.getGradeToExecute() << ")";
    return (os);
}

Form::~Form(){}