/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:42:46 by ezahiri           #+#    #+#             */
/*   Updated: 2024/11/30 20:27:17 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <iomanip>
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
};