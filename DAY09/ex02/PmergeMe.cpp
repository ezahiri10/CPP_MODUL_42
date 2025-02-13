/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:31:07 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/13 18:01:45 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void print_v(const std::vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        std::cout<< v[i] << " " ;
    }
    std::cout << std::endl;
}

void PmergeMe::makePairsV(std::vector<std::pair<int, int> > &pairs)
{
    int i = 0;

    for (;i < this->V.size() - (this->V.size() % 2 != 0); i += 2)
    {
        if (this->V[i] > this->V[i + 1])
            pairs.push_back(std::make_pair(this->V[i], this->V[i + 1]));
        else 
            pairs.push_back(std::make_pair(this->V[i + 1], this->V[i]));
    }
    if (this->V.size() % 2 != 0)
    {
        pairs.push_back(std::make_pair(this->V[i], -1));
        std::sort(pairs.begin(), pairs.end() - 1);
    }
    else
        std::sort(pairs.begin(), pairs.end());
}

void PmergeMe::makePairsD(std::deque<std::pair<int, int> > &pairs)
{
    int i = 0;

    for (;i < this->D.size() - (this->D.size() % 2 != 0); i += 2)
    {
        if (this->D[i] > this->D[i + 1])
            pairs.push_back(std::make_pair(this->D[i], this->D[i + 1]));
        else 
            pairs.push_back(std::make_pair(this->D[i + 1], this->D[i]));
    }
    if (this->D.size() % 2 != 0)
    {
        pairs.push_back(std::make_pair(this->D[i], -1));
        std::sort(pairs.begin(), pairs.end() - 1);
    }
    else
        std::sort(pairs.begin(), pairs.end());
}


int PmergeMe::searchIndexV(const std::vector<int> &main, int target)
{
    return std::lower_bound(main.begin(), main.end(), target) - main.begin();
}

int PmergeMe::searchIndexD(const std::deque<int> &main, int target)
{
    return std::lower_bound(main.begin(), main.end(), target) - main.begin();
}

void PmergeMe::insertElementV(std::vector<int> &main,const std::vector<int> &pend)
{
    std::vector<int> jacob;

    seqaunceToInsertV(jacob, pend.size());
    int pos = 0, indx = 0;
    for (int i = 0; i < jacob.size(); i++)
    {
        indx = jacob[i];
        if (indx < pend.size())
        {
           pos = searchIndexV(main, pend[indx]);
           main.insert(main.begin() + pos, pend[indx]); 
        }
    }
    if (this->V.size() % 2 != 0)
    {
        indx = searchIndexV(main,  this->V[this->V.size() - 1]);
        main.insert(main.begin() + indx, this->V[this->V.size() - 1]);
    }
}

void PmergeMe::insertElementD(std::deque<int> &main,const std::deque<int> &pend)
{
    std::deque<int> jacob;

    seqaunceToInsertD(jacob, pend.size());
    int pos = 0, indx = 0;
    for (int i = 0; i < jacob.size(); i++)
    {
        indx = jacob[i];
        if (indx < pend.size())
        {
           pos = searchIndexD(main, pend[indx]);
           main.insert(main.begin() + pos, pend[indx]); 
        }
    }
    if (this->V.size() % 2 != 0)
    {
        indx = searchIndexD(main,  this->V[this->V.size() - 1]);
        main.insert(main.begin() + indx, this->V[this->V.size() - 1]);
    }
}


void PmergeMe::SortV()
{
    std::vector<int> main;
    std::vector<int> pend;
    std::vector<std::pair<int, int> > pairs;

    makePairsV(pairs);
    for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end() - (this->V.size() % 2 != 0); it++)
    {
        main.push_back(it->first);
        pend.push_back(it->second);
    }
    insertElementV(main, pend);
    print_v(main);
}

void PmergeMe::SortD()
{
    std::deque<int> main;
    std::deque<int> pend;
    std::deque<std::pair<int, int> > pairs;

    makePairsD(pairs);
    for (std::deque<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end() - (this->D.size() % 2 != 0); it++)
    {
        main.push_back(it->first);
        pend.push_back(it->second);
    }
    insertElementD(main, pend);
}

// #########################################

void PmergeMe::ParseV(int ac, char **av)
{
    int r;

    if (ac == 1)
            throw std::invalid_argument("Numver of Arguement Invalid");
    for (int i = 1; i < ac; i++)
    {
        r = StrToLong(av[i]);
        for (int j = 0; j < this->V.size(); j++)
        {
            if (r == V[j])
                throw std::invalid_argument("Error Elmenets is Duplicated");
        }
        this->V.push_back(r);
    }
}
void PmergeMe::ParseD(int ac, char **av)
{
    int r;

    if (ac == 1)
            throw std::invalid_argument("Numver of Arguement Invalid");
    for (int i = 1; i < ac; i++)
    {
        r = StrToLong(av[i]);
        for (int j = 0; j < this->D.size(); j++)
        {
            if (r == V[j])
                throw std::invalid_argument("Error Elmenets is Duplicated");
        }
        this->D.push_back(r);
    }
}

long PmergeMe::StrToLong(const std::string &s)
{
    long result;
    char *end;

    if (s.find_first_not_of("0123456789") != std::string::npos || s.empty())
        throw  std::invalid_argument("Error");
    result = strtol(s.c_str(), &end, 10);
    if (*end != '\0' || result > INT_MAX || result < 0)
        throw  std::invalid_argument("Error");
    return (result);
}

int PmergeMe::jacobSthal(int n)
{
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    int prev0 = 0, prev1 = 1, result = 0;
    for (int i = 1; i < n; i++)
    {
        result = prev1 + 2 * prev0;
        prev0 = prev1;
        prev1 = result;
    }
    return (result);
}

void PmergeMe::seqaunceToInsertV(std::vector<int> &jacob, int size)
{
    int JN;
    int prevJN;
    int i = 1;

    jacob.push_back(0);
    while (jacob.size() < size)
    {
        prevJN = jacobSthal(i - 1);
        JN = jacobSthal(i); 
        while (JN > prevJN)
        { 
            jacob.push_back(JN--);
        }
        i++;
    }
}

void PmergeMe::seqaunceToInsertD(std::deque<int> &jacob, int size)
{
    int JN;
    int prevJN;
    int i = 1;

    jacob.push_back(0);
    while (jacob.size() < size)
    {
        prevJN = jacobSthal(i - 1);
        JN = jacobSthal(i); 
        while (JN > prevJN)
        { 
            jacob.push_back(JN--);
        }
        i++;
    }
}

int main (int ac , char **av)
{
    try
    {
        PmergeMe obj;
        obj.ParseV(ac, av);
        obj.SortV();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (EXIT_FAILURE);
    }
    
}
