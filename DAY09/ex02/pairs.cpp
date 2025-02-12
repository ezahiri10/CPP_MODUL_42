/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pairs.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:10:51 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/13 00:33:38 by ezahiri          ###   ########.fr       */
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
    for (int i = 0; i < size; i++)
    {
        v.push_back(jacobSthal(i));
        // if (v.size() > 3)
        // {
        //     a = *(v.end() - 1) - 1;
        //     final = *(v.end() - 2 - count);
        //     count = 0;
        // }
        // while (v.size() > 3 && a != final)
        // {
        //     // std::cout << "a = " << a << " final =" << final << std::endl;
        //     // sleep(2);
        //     v.push_back(a);
        //     a--;
        //     count++;
        // }
    }
    // print_v();
    // if (v.size() > 2)
    //     v.erase(v.begin() + 1);
}

int binary_search(const std::vector<int> &v, int target)
{
    return std::lower_bound(v.begin(), v.end(), target) - v.begin();
}

bool isInserted(const std::vector<bool> &v)
{
    for (int j = 0; j < v.size() ; j++)
    {
        if (v[j] != true)
            return (false);      
    }
    return (true);
    
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
    std::vector<int> jacob;
    seqaunceToInsert(jacob, pend.size());
    std::vector<bool> toCheck(pend.size(), false);
    int index = 0, pos, x;
    for (int i = 0; i < jacob.size(); i++)
    {
        index = jacob[i];
        if (index < jacob.size() && !toCheck[index])
        {
            pos =  binary_search(main, pend[index]);
            main.insert(main.begin() + pos, pend[index]);
            toCheck[index] = true;
        }
       x = index - 1;
       while (i != 0 && x < jacob.size() && x > jacob[i - 1])
       {
            pos =  binary_search(main, pend[x]);
            main.insert(main.begin() + pos, pend[x]);
            toCheck[x] = true;
            x--;
       }
    }
    for (int i = 0; i < toCheck.size(); i++)
    {
        if (toCheck[i] == false)
        {
            // std::cout << "pend[i] : " << pend[i] << std::endl;
            pos =  binary_search(main, pend[i]);
            main.insert(main.begin() + pos, pend[i]);
            toCheck[i] = true;
        }
    }
    if (v.size() % 2 != 0)
    {
        index = binary_search(main,  v[v.size() - 1]);
        main.insert(main.begin() + index, v[v.size() - 1]);
    }
    print_v(main);
    
    // // main.insert(main.begin(), *(pend.begin()));
    // // pend.erase(pend.begin(), pend.begin() + 1);
    // // std::cout << "MAIN :" << std::endl;
    // // print_v(main);
    // // std::cout << "PEND :" << std::endl;
    // // print_v(pend);
    // int index = 0, x = 0, pos = 0;

    // for (int i = 0; i < pend.size(); i++)
    // {
    //     // std::cout << "salam" << std::endl;
    //     if (index < pend.size() && !toCheck[index])
    //     {
    //         index = jacob[i];
    //         // std::cout << "index : " << index << " pend[index] :" << pend[index]<< std::endl;
    //         pos =  binary_search(main, pend[index]);
    //         main.insert(main.begin() + pos, pend[index]);
    //         toCheck[index] = true;
    //     }
    //     x = jacob[i] - 1;
    //     while (i > 0  && x > jacob[i - 1])
    //     {
    //         // std::cout << "x : " << x << " pend[index] :" << pend[x]<< std::endl;
    //         if (isInserted(toCheck)== true)
    //         {
    //             print_v(main); 
    //             return ;
    //         }
    //         // sleep(2);
    //         if(!toCheck[x])
    //         {
    //             index = x;
    //             pos =  binary_search(main, pend[x]);
    //             main.insert(main.begin() + pos, pend[x]);
    //             toCheck[x] = true;
    //         }
    //         x--;
    //     }
    // }
    // // for (in)
}

int main ()
{
    std::vector<int> v;
    std::vector<std::pair<int, int> > pairs;

    // for (int i = 1; i > 0 ; i--)
    // {
    //     v.push_back(i);
    // }
    fill_vector(v, 10000);
    // print_v(v);
    makePairs(v, pairs);
    mergeInsertion(v, pairs);
    
}