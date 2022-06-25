/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:07:03 by cnorma            #+#    #+#             */
/*   Updated: 2022/06/25 20:19:01 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>

class Span
{
private:
	std::vector<int> array;
	unsigned int	len;

public:
	Span();
	Span(unsigned int N);
	Span(const Span& other);
	virtual ~Span();

	void	addNumber(int number);
	void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int		shortestSpan();
	int		longestSpan();

	Span& operator=(const Span& other);
	int& operator[](unsigned int index);
};
