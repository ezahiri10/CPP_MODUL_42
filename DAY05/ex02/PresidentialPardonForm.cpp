/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:46:05 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/18 23:53:29 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : nameForm("default") , isSigned(false) , gradeToSign(25) , gradeToExecute(5), target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) 
    :  nameForm(other.nameForm) , 
        isSigned(other.isSigned) , 
        gradeToSign(other.gradeToSign) , 
        gradeToExecute(other.gradeToExecute), 
        target(other.target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &other)
{
    this->nameForm = other.nameForm;
    this->target = other.target;
    return (*this);
}

std::string PresidentialPardonForm::getName() const
{
    return (this->nameForm);
}

bool PresidentialPardonForm::getIsSigned() const
{
    return (this->isSigned);
}

int PresidentialPardonForm::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

int PresidentialPardonForm::getGradeTosign () const
{
    return (this->gradeToSign);   
}

std::string PresidentialPardonForm::getTarget () const
{
    return (this->target);   
}

const char *PresidentialPardonForm::GradeTooHighException::what () const throw()
{
    return ("PresidentialPardonForm grade is too high!");
}

const char *PresidentialPardonForm::GradeTooLowException::what () const throw()
{
    return ("PresidentialPardonForm grade is too low!");
}

PresidentialPardonForm::PresidentialPardonForm (const std::string &name , std::string& target) :  gradeToSign(25), gradeToExecute(5)
{
    this->nameForm = name;
    this->target= target;
    this->isSigned = false;
}

void PresidentialPardonForm::beSigned (Bureaucrat &b)
{
    if (b.getGrade() > this->gradeToSign)
        throw PresidentialPardonForm::GradeTooLowException();
    else
        isSigned = true;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->gradeToExecute)
        throw PresidentialPardonForm::GradeTooLowException();
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){}