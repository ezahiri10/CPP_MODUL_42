/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:22:36 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/20 13:37:56 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
            throw GradeTooLowException();
    this->name = name;
    this->grade = grade;
}

Bureaucrat::Bureaucrat ()
{}

Bureaucrat::Bureaucrat (const Bureaucrat &other) : name(other.name), grade(other.grade)
{}

Bureaucrat::~Bureaucrat ()
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    this->name = other.name;
    this->grade = other.grade;
    return (*this);
}


std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade () const
{
    return (this->grade);
}

void Bureaucrat::GradeIncrement()
{
    if (this->grade <= 1)
            throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::GradeDecrement()
{
    if (this->grade >= 150)
        throw GradeTooLowException();
    this->grade++;
}

std::ostream &operator<< (std::ostream &os, Bureaucrat &b)
{
    os << b.getName () << ", bureaucrat grade " << b.getGrade ();
    return (os);
}

const char *Bureaucrat::GradeTooHighException::what () const throw()
{
    return ("Bureaucrat grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what () const throw()
{
    return ("Bureaucrat grade is too low!");
}

void Bureaucrat::signForm(AForm &form)
{
    try {
        form.beSigned(*this);
        std::cout << *this << " signed " << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << *this << " couldn’t sign " << form << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form)
{
    if (form.getIsSigned() == false)
        throw AForm::FormNotSignedException();
    try {
        form.execute(*this);
        std::cout << *this << " executed " << form << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "problem :" << e.what () << std::endl;
    }
}