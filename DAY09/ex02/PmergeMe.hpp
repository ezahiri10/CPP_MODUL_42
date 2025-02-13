/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:23:21 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/13 17:31:18 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <utility>
#include <algorithm>

class PmergeMe
{
    private :
        std::vector<int> V;
        std::deque<int> D;

        int jacobSthal(int n);
        long StrToLong(const std::string &s);
        void makePairsV(std::vector<std::pair<int, int> > &pairs);
        void seqaunceToInsert(std::vector<int> &jacob, int size);
        int searchIndexV(const std::vector<int> &main, int target);
    public :
        // mergeInsertionV(main,const std::vector &pend);
        void ParseV(int ac, char **av);
        void SortV();
};