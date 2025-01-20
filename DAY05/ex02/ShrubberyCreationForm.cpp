/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:46:05 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/20 13:34:29 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) 
       : AForm(other),
        target(other.target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &other)
{
  this->target = other.target;
    AForm::operator=(other);
    return (*this);
}

std::string ShrubberyCreationForm::getTarget () const
{
    return (this->target);   
}

ShrubberyCreationForm::ShrubberyCreationForm (const std::string& target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

const char *ShrubberyCreationForm::FileNotOpenedException::what () const throw()
{
    return ("File not opened");
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw ShrubberyCreationForm::GradeTooLowException();
    std::ofstream outf ((this->target + "_shrubbery").c_str());

    if (outf.is_open() == false)
        throw ShrubberyCreationForm::FileNotOpenedException();

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