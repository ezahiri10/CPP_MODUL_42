/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:42:46 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/07 13:51:11 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

# include "head.hpp"

class Contact 
{
    private :
        std::string FirstName;
        std::string LastName;
        std::string  NickName;
        std::string  NbrTele;
        std::string  secret;
    public :
        void        SetFirstName (std::string s);
        void        SetLastName (std::string s);
        void        SetNickName (std::string s);
        void        SetSecret (std::string s);
        void        SetNbrTele (std::string s);
        std::string GetFirstName ();
        std::string GetLastName ();
        std::string GetNickName ();
        std::string GetNbrTele ();
        std::string GetSecret ();
};

# endif 