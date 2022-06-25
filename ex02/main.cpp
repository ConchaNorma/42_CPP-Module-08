/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:58:57 by cnorma            #+#    #+#             */
/*   Updated: 2022/06/25 22:38:52 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>


int main(){

    std::cout << "**** MUTANTSTACK ****" << std::endl;

    MutantStack<int>    mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "TOP : " << mstack.top() << std::endl;
    std::cout << "SIZE : " << mstack.size() << std::endl;

    mstack.pop();

    std::cout << "SIZE post pop : " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while(it != ite){
        std::cout << *it << " ";
        ++it;
    }
	std::cout << std::endl;
    
    std::stack<int> s(mstack);

	
    std::cout << "**** LIST ****" << std::endl;


    std::list<int>    list;

    list.push_back(5);
    list.push_back(99);

    std::cout << "TOP = " << list.back() << std::endl;
    std::cout << "Size = " << list.size() << std::endl;

    list.pop_back();

    std::cout << "Size post pop = " << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);

    //[...]
    list.push_back(0);

    std::list<int>::iterator itlist = list.begin();
    std::list<int>::iterator itliste = list.end();

    ++itlist;
    --itlist;

    while(itlist != itliste){
        std::cout << *itlist << " ";
        ++itlist;
    }
	std::cout << std::endl;

	std::cout << "**** MUTANT CPY ****" << std::endl;
    MutantStack<int>::iterator it2 = mstack.begin();
    MutantStack<int>::iterator ite2 = mstack.end();

    while(it2 != ite2){
        std::cout << *it2 << " ";
        ++it2;
    }
	std::cout << std::endl;

	std::cout << "**** LIST CPY ****" << std::endl;

    std::list<int> s2(list);

	std::list<int>::iterator itlist2 = list.begin();
    std::list<int>::iterator itliste2 = list.end();

	while(itlist2 != itliste2){
        std::cout << *itlist2 << " ";
        ++itlist2;
    }
	std::cout << std::endl;


    std::cout << "**** MUTANTSTACK reverse ****" << std::endl;

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

    ++rit;
    --rit;

    while(rit != rite){
        std::cout << *rit << " ";
        ++rit;
    }
	std::cout << std::endl;

    std::cout << "**** LIST reverse ****" << std::endl;
    
    std::list<int>::reverse_iterator ritlist = list.rbegin();
    std::list<int>::reverse_iterator ritliste = list.rend();

    ++ritlist;
    --ritlist;

    while(ritlist != ritliste){
        std::cout << *ritlist << " ";
        ++ritlist;
    }
    std::cout << std::endl;

    return 0;
}