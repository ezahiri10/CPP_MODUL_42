/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:17:59 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/06 20:46:15 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"


class  BitcoinExchange
{
    private :
         std::string NameFile;
    public :
        BitcoinExchange();
        BitcoinExchange (const std::string &NameFile);
        BitcoinExchange (const BitcoinExchange& cpy);
        void exchange();
        BitcoinExchange &operator= (const BitcoinExchange &other);
        ~BitcoinExchange();
};
