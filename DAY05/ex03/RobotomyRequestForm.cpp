/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:46:05 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/20 13:34:30 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm", 72, 45)
{
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &other)
{
  this->target = other.target;
    AForm::operator=(other);
    return (*this);
}

std::string RobotomyRequestForm::getTarget () const
{
    return (this->target);   
}

RobotomyRequestForm::RobotomyRequestForm (const std::string& target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::FormNotSignedException();
    std::cout << "BZZZZZZ... drilling noises..." << std::endl;
    time_t r = time(NULL) % 100;
    if (r % 2 == 0)
        std::cout << this->target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy of " << this->target <<" failed." << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm(){}