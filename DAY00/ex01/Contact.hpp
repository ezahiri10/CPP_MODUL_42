/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:42:46 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/02 14:40:58 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact 
{
    private :
        std::string FirstName;
        std::string LastName;
        std::string  NickName;
        std::string  NbrTele;
        std::string  secret;
    public :
        void        SetFirstName (std::string &s);
        void        SetLastName (std::string &s);
        void        SetNickName (std::string &s);
        void        SetSecret (std::string &s);
        void        SetNbrTele (std::string &s);
        const std::string& GetFirstName ();
        const std::string& GetLastName ();
        const std::string& GetNickName ();
        const std::string& GetNbrTele ();
        const std::string& GetSecret ();
};

# endif 