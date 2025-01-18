/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:46:05 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/18 23:53:48 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : nameForm("default") , isSigned(false) , gradeToSign(0) , gradeToExecute(0), target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) 
    :  nameForm(other.nameForm) , 
        isSigned(other.isSigned) , 
        gradeToSign(other.gradeToSign) , 
        gradeToExecute(other.gradeToExecute), 
        target(other.target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &other)
{
    this->nameForm = other.nameForm;
    this->target = other.target;
    return (*this);
}

std::string RobotomyRequestForm::getName() const
{
    return (this->nameForm);
}

bool RobotomyRequestForm::getIsSigned() const
{
    return (this->isSigned);
}

int RobotomyRequestForm::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

int RobotomyRequestForm::getGradeTosign () const
{
    return (this->gradeToSign);   
}

std::string RobotomyRequestForm::getTarget () const
{
    return (this->target);   
}

const char *RobotomyRequestForm::GradeTooHighException::what () const throw()
{
    return ("RobotomyRequestForm grade is too high!");
}

const char *RobotomyRequestForm::GradeTooLowException::what () const throw()
{
    return ("RobotomyRequestForm grade is too low!");
}

RobotomyRequestForm::RobotomyRequestForm (const std::string &name, std::string& target) :  gradeToSign(72), gradeToExecute(45)
{
    this->nameForm = name;
    this->target = target;
    this->isSigned = false;
}

void RobotomyRequestForm::beSigned (Bureaucrat &b)
{
    if (b.getGrade() > this->gradeToSign)
        throw RobotomyRequestForm::GradeTooLowException();
    else
        isSigned = true;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->gradeToExecute)
        throw RobotomyRequestForm::GradeTooLowException();
    int r = rand();
    if (r % 2 == 0)
        std::cout << this->target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy of " << this->target <<" failed." << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm(){}