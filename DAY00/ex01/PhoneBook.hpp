/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:11:16 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/07 15:27:14 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
    private :
        Contact contacts[8];
        int     index;
        int     size;
    public :
        static PhoneBook& getInstance();
        void    AddContact (Contact add);
        void    ShowAll ();
        void    ShowContact (int i);
        void    set_size(int  i);
        void    set_index(int i);
        int     get_size();
        Contact GetContact(int i);
};

# endif
