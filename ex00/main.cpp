/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:58:57 by cnorma            #+#    #+#             */
/*   Updated: 2022/06/25 17:43:02 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vect;
	std::deque<int> deq;
	std::list<int> lst;

	for (int count=0; count < 5; ++count)
	{
		vect.push_back(10 - count);
		deq.push_back(10 - count);
		lst.push_back(10 - count);
	}

	std::cout	<< "VECTOR.\tValue by pointer iterator: ";
	try{std::cout << *easyfind(vect, 7) << std::endl;}
	catch(std::exception& e){std::cout << "Value not found.\n";}
	std::cout << "DEQUE.\tValue by pointer iterator: ";
	try{std::cout << *easyfind(deq, 8) << std::endl;}
	catch(std::exception& e){std::cout << "Value not found.\n";}
	std::cout << "LIST.\tValue by pointer iterator: ";
	try{std::cout << *easyfind(lst, 11) << std::endl;}
	catch(std::exception& e){std::cout << "Value not found.\n";}

	return 0;
}
