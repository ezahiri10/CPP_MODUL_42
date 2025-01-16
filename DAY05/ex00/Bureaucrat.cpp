/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:22:36 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/16 20:38:04 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, const std::string &name)
{
    try {
        if (grade < 1)
            throw GradeTooHighException();
    }
    catch (const std::exception& high)
    {
        std::cout << high.what() << std::endl;
        return ;
    }
    try {
        if (grade > 150)
        {
            throw GradeTooLowException();
        }
    }
    catch (const std::exception& low)
    {
        std::cout << low.what() << std::endl;
        return ;
    }
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
    try {
        if (this->grade - 1 < 1)
            throw GradeTooHighException();
    }
    catch (const std::exception& high)
    {
        std::cout << high.what() << std::endl;
        return;
    }
    this->grade--;
}

void Bureaucrat::GradeDecrement()
{
    try {
        if (this->grade + 1 > 150)
            throw GradeTooLowException();
    }
    catch (const std::exception& low)
    {
        std::cout << low.what() << std::endl;
        return ;
    }
    this->grade++;
}

std::ostream &operator<< (std::ostream &os, Bureaucrat &b)
{
    os << b.getName () << ", bureaucrat grade " << b.getGrade ();
    return (os);
}