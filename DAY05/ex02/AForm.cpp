/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:46:05 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 11:52:18 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : gradeToSign (0) , gradeToExecute(0)
{}

AForm::AForm(const AForm &other) 
    :  nameForm(other.nameForm) , 
        isSigned(other.isSigned) , 
        gradeToSign(other.gradeToSign) , 
        gradeToExecute(other.gradeToExecute)
{
    this->target = other.target;
}

AForm &AForm::operator= (const AForm &other)
{
    this->nameForm = other.nameForm;
    this->target = other.target;
    return (*this);
}

std::string AForm::getName() const
{
    std::cout << "getName" << std::endl;
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

std::string AForm::getTarget () const
{
    return (this->target);   
}

const char *AForm::GradeTooHighException::what () const throw()
{
    return ("AForm grade is too high!");
}

const char *AForm::GradeTooLowException::what () const throw()
{
    return ("AForm grade is too low!");
}

AForm::AForm (const std::string &name, int gradeToSign, int gradeToExecute,const std::string& target) :  gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    this->nameForm = name;
    this->target = target;
    this->isSigned = false;
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