/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:07:03 by cnorma            #+#    #+#             */
/*   Updated: 2022/06/25 21:14:57 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <numeric>
#include <stdexcept>
#include <iostream>

Span::Span() : array(0), len(0)
{}

Span::Span(unsigned int N)
{
	array.reserve(N);
	len = N;
}

Span::Span(const Span& other) : array(other.array), len(other.len)
{}

Span::~Span()
{}

Span& Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	array = other.array;
	len = other.len;
	return *this;
}

int& Span::operator[](unsigned int index)
{
	return array.at(index);
}

void Span::addNumber(int number)
{
	if (array.size() == len)
		throw std::runtime_error("Adding is not possible. The array is full.");
	array.push_back(number);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if(array.size() + std::distance(begin, end) > len)
		throw std::runtime_error("Adding is not possible. Too large range of values.");
	array.insert(array.end(), begin, end);
}

int Span::shortestSpan(){
	if (array.size() < 2)
		throw std::runtime_error("The array has less than 2 elements.");
	std::vector<int> tmp(array);
	std::sort(std::begin(tmp), std::end(tmp));
	std::adjacent_difference(std::begin(tmp), std::end(tmp), std::begin(tmp));
	return *std::min_element(std::begin(tmp) + 1, std::end(tmp));
}

int Span::longestSpan(){
	if (array.size() < 2)
		throw std::runtime_error("The array has less than 2 elements.");
	std::vector<int> tmp(array);
	std::sort(std::begin(tmp), std::end(tmp));
	return *(tmp.end() - 1) - *tmp.begin();
}
