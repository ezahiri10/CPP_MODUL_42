/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:37:43 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 17:47:17 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{};

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern::~Intern()
{}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return (*this);
}


const char *Intern::UnkownFormException::what() const throw()
{
    return ("Unkown form"); 
}

int get_index(const std::string &name)
{
    std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (names[i] == name)
            return (i);
    }
    return(-1);
}

static AForm *create_shrubbery(const std::string &name)
{
    return (new ShrubberyCreationForm(name));
}

static AForm *create_robotomy(const std::string &name)
{
    return (new RobotomyRequestForm(name));
}
static AForm *create_presidential(const std::string &target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
    int idx = get_index(name);
    if (-1 == idx)
        throw Intern::UnkownFormException();
    AForm *(*ptr_f[3])(const std::string &name) = {create_presidential, create_robotomy ,create_shrubbery};

    return (ptr_f[idx](target));
}
