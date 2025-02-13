/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:23:21 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/13 17:58:11 by ezahiri          ###   ########.fr       */
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
        void makePairsD(std::deque<std::pair<int, int> > &pairs);
        void makePairsV(std::vector<std::pair<int, int> > &pairs);
        void seqaunceToInsertV(std::vector<int> &jacob, int size);
        void seqaunceToInsertD(std::deque<int> &jacob, int size);
        int searchIndexV(const std::vector<int> &main, int target);
        int searchIndexD(const std::deque<int> &main, int target);
        void insertElementV(std::vector<int> &main,const std::vector<int> &pend);
        void insertElementD(std::deque<int> &main,const std::deque<int> &pend);
    public :
        void ParseV(int ac, char **av);
        void ParseD(int ac, char **av);
        void SortV();
        void SortD();
};