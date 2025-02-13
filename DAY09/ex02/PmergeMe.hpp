/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:23:21 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/13 20:41:46 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <utility>
#include <algorithm>
#include <time.h>
#include <iomanip>

class PmergeMe
{
    private :
        std::vector<int> V;
        std::deque<int> D;
        std::clock_t timeV;
        std::clock_t timeD;

        int jacobSthal(int n);
        long StrToLong(const std::string &s);
        void makePairsD(std::deque<std::pair<int, int> > &pairs);
        void makePairsV(std::vector<std::pair<int, int> > &pairs);
        void seqaunceToInsertV(std::vector<int> &jacob, size_t size);
        void seqaunceToInsertD(std::deque<int> &jacob, size_t size);
        int searchIndexV(const std::vector<int> &main, int target);
        int searchIndexD(const std::deque<int> &main, int target);
        void insertElementV(std::vector<int> &main,const std::vector<int> &pend);
        void insertElementD(std::deque<int> &main,const std::deque<int> &pend);
        void print_v(const std::vector<int> &v, char b_a);
        void print_d(const std::deque<int> &d, char b_a);
    public :
        void affichTime(char toCheck);
        void ParseV(int ac, char **av);
        void ParseD(int ac, char **av);
        void SortV();
        void SortD();
        PmergeMe();
        PmergeMe(const PmergeMe &cpy);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();
};