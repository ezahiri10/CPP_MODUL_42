/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:22:36 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/17 18:12:34 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, const std::string &name)
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
    if (this->grade - 1 < 1)
            throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::GradeDecrement()
{
    if (this->grade + 1 > 150)
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
    return ("1 is highest possible grade ");
}

const char *Bureaucrat::GradeTooLowException::what () const throw()
{
    return "150 is lowest possible grade";
}