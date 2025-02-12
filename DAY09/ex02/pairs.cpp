/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pairs.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:10:51 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/12 18:03:02 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

void fill_vector(std::vector<int> &v, int size)
{
    std::srand(std::time(0));

    for (int i = 0; i < size; i++)
    {
        v.push_back(std::rand() % 100);
    }
}

void print_v(const std::vector<int> &v)
{
    // std::cout << "===============================" <<std::endl;
    for (int i = 0; i < v.size(); i++)
    {
        std::cout <<  " " << v[i] ;
    }
    std::cout << std::endl;
}

void print_pairs( std::vector<std::pair<int, int> > &pairs)
{
    std::cout << "pairs.size() " << pairs.size() << std::endl;
    for (int i = 0; i < pairs.size(); i++)
    {
        std::cout << "( " << pairs[i].first << ", " << pairs[i].second << " )";
    }
    std::cout << std::endl;
}

void makePairs(const std::vector<int> &v, std::vector<std::pair<int, int> > &pairs)
{
    int i = 0;

    for (;i < v.size() - (v.size() % 2 != 0); i += 2)
    {
        if (v[i] > v[i + 1])
            pairs.push_back(std::make_pair(v[i], v[i + 1]));
        else 
            pairs.push_back(std::make_pair(v[i + 1], v[i]));
    }
    if (v.size() % 2 != 0)
    {
        pairs.push_back(std::make_pair(v[i], -1));
        std::sort(pairs.begin(), pairs.end() - 1);
    }
    else
        std::sort(pairs.begin(), pairs.end());
    // !print_pairs(pairs);
    // !print_pairs(pairs);
}

int jacobSthal(int n)
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
#include <unistd.h>
void seqaunceToInsert(std::vector<int> &v, int size)
{
    // std::vector<>
    int a, final , count = 0;

    for (int i = 0; i < size; i++)
    {
        v.push_back(jacobSthal(i));
        if (v.size() > 3)
        {
            a = *(v.end() - 1) - 1;
            final = *(v.end() - 2 - count);
            count = 0;
        }
        while (v.size() > 3 && a != final)
        {
            // std::cout << "a = " << a << " final =" << final << std::endl;
            // sleep(2);
            v.push_back(a);
            a--;
            count++;
        }
    }
    // print_v(v);
    if (v.size() > 2)
        v.erase(v.begin() + 1);
}

int binary_search(const std::vector<int> &v, int target)
{
    return std::lower_bound(v.begin(), v.end(), target) - v.begin();
}

void mergeInsertion (const std::vector<int> &v,std::vector<std::pair<int, int> > &pairs)
{
    std::vector<int> main;    
    std::vector<int> pend;

    for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end() - (v.size() % 2 != 0); it++)
    {
        main.push_back(it->first);
        pend.push_back(it->second);
    }
    main.insert(main.begin(), *(pend.begin()));
    pend.erase(pend.begin(), pend.begin() + 1);
    // std::cout << "MAIN :" << std::endl;
    // print_v(main);
    // std::cout << "PEND :" << std::endl;
    // print_v(pend);
    std::vector<int> jacob;
    seqaunceToInsert(jacob, pend.size());
    int index = 0;
    for (int i = 0; i < jacob.size(); i++)
    {
        index =  binary_search(main, pend[jacob[i]]);
        main.insert(main.begin() + index, pend[jacob[i]]);
    }
    if (v.size() % 2 != 0)
    {
        index = binary_search(main,  v[v.size()]);
        main.insert(main.begin() + index, v[v.size()]);
        
    }
    print_v(main);
}

int main ()
{
    std::vector<int> v;

    // seqaunceToInsert(v, 10);
    // print_v(v);
    
    std::vector<std::pair<int, int> > pairs;

    // for (int i = 100; i >= 0 ; i--)
    // {
    //     v.push_back(i);
    // }
    fill_vector(v, 10);
    print_v(v);
    makePairs(v, pairs);
    mergeInsertion(v, pairs);
    
}