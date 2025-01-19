/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:46:05 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 13:11:06 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : gradeToSign (0) , gradeToExecute(0)
{
    this->nameForm = "ShrubberyCreationForm";
    this->target = "default";
    this->isSigned = false;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) 
       : AForm(other),
        target(other.target),
        nameForm(other.nameForm) , 
        isSigned(other.isSigned) , 
        gradeToSign(other.gradeToSign) , 
        gradeToExecute(other.gradeToExecute)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &other)
{
    this->nameForm = other.nameForm;
    this->target = other.target;
    return (*this);
}

std::string ShrubberyCreationForm::getName() const
{
    return (this->nameForm);
}

bool ShrubberyCreationForm::getIsSigned() const
{
    return (this->isSigned);
}

int ShrubberyCreationForm::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

int ShrubberyCreationForm::getGradeTosign () const
{
    return (this->gradeToSign);   
}

std::string ShrubberyCreationForm::getTarget () const
{
    return (this->target);   
}

const char *ShrubberyCreationForm::GradeTooHighException::what () const throw()
{
    return ("ShrubberyCreationForm grade is too high!");
}

const char *ShrubberyCreationForm::GradeTooLowException::what () const throw()
{
    return ("ShrubberyCreationForm grade is too low!");
}

const char *ShrubberyCreationForm::FormNotSignedException::what () const throw()
{
    return ("ShrubberyCreationForm is not signed!");
}

ShrubberyCreationForm::ShrubberyCreationForm (const std::string &name,const std::string& target) :  gradeToSign(145), gradeToExecute(137)
{
    this->nameForm = name;
    this->target = target;
    this->isSigned = false;
}

void ShrubberyCreationForm::beSigned (Bureaucrat &b)
{
    if (b.getGrade() > this->gradeToSign)
        throw ShrubberyCreationForm::FormNotSignedException();
    else
        this->isSigned = true;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->gradeToExecute)
        throw ShrubberyCreationForm::GradeTooLowException();
    std::ofstream outf ((this->target + "_shrubbery").c_str());

    outf << "      /\\      " << std::endl;
    outf << "     /\\*\\     " << std::endl;
    outf << "    /\\O\\*\\    " << std::endl;
    outf << "   /*/\\/\\/\\   " << std::endl;
    outf << "  /\\O\\/\\*\\/\\  " << std::endl;
    outf << " /\\*\\/\\*\\/\\/\\ " << std::endl;
    outf << "/\\O\\/\\*/\\/O/\\\\" << std::endl;
    outf << "      ||      " << std::endl;
    outf << "      ||      " << std::endl;
    outf << "      ||      " << std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm(){}