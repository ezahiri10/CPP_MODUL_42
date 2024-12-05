/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:11:16 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/02 21:22:39 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

class PhoneBook
{
    private :
        Contact contacts[8];
        int     index;
        int     size;        
    public :
        void    AddContact (Contact add);
        void    ShowAll ();
        void    set_size(int  i);
        void    set_index(int i);
        int     get_size();
        Contact GetContact(int i);
};



// class Car {

//   private:
//         Car();  

// public:
//     static Car& getInstance();
// };

// Car &Car::getInstance() {
//     static Car car;
//     return car;
// }


// int start() {

    
//     Car c = Car::getInstance();

//     c.
// }

// int main() {


//     Car c = Car::getInstance();
    
// }