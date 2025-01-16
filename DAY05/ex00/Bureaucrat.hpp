/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:04:54 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/16 20:10:24 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class Bureaucrat
{
    private :
        std::string name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        Bureaucrat(int grade, const std::string &name);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void GradeIncrement();
        void GradeDecrement();
};

std::ostream &operator<< (std::ostream &os, Bureaucrat &b);
#endif

