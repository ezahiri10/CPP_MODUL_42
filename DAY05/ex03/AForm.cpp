/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:46:05 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 14:14:56 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : gradeToSign (0) , gradeToExecute(0)
{}
AForm::AForm (const std::string &name, int gradeToSign, int gradeToExecute) :  gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    this->nameForm = name;
    this->isSigned = false;
}

AForm::AForm(const AForm &other) 
    :  nameForm(other.nameForm) , 
        isSigned(other.isSigned) , 
        gradeToSign(other.gradeToSign) , 
        gradeToExecute(other.gradeToExecute)
{}


AForm &AForm::operator= (const AForm &other)
{
    this->nameForm = other.nameForm;
    return (*this);
}

std::string AForm::getName() const
{
    return (this->nameForm);
}

bool AForm::getIsSigned() const
{
    return (this->isSigned);
}

int AForm::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

int AForm::getGradeTosign () const
{
    return (this->gradeToSign);   
}

const char *AForm::GradeTooHighException::what () const throw()
{
    return ("Grade is too high!");
}

const char *AForm::GradeTooLowException::what () const throw()
{
    return ("Grade is too low!");
}

const char *AForm::FormNotSignedException::what () const throw()
{
    return ("Form is not signed!");
}

void AForm::beSigned (Bureaucrat &b)
{
    if (b.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    else
        isSigned = true;
}

std::ostream &operator<< (std::ostream &os, const AForm &form)
{
    os << "Form " << form.getName() << " (signed: ";
    os << (form.getIsSigned() ? "yes" : "no") ;
    os << ", grade required to sign: " << form.getGradeTosign() ;
    os  << ", grade required to execute: " << form.getGradeToExecute() << ")" << std::endl;
    return (os);
}

AForm::~AForm(){}