/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:42:03 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/19 14:19:17 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm &operator= (const PresidentialPardonForm &other);
        ~PresidentialPardonForm();
        PresidentialPardonForm (const std::string& target);
        void execute(Bureaucrat const & executor) const;
};

# endif