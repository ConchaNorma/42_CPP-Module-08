/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:58:57 by cnorma            #+#    #+#             */
/*   Updated: 2022/06/25 21:16:06 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	{
		std::cout << "--- Subject -->" << std::endl;

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	{
		std::cout << "--- addNumber(). Adding over the limit -->" << std::endl;

		try
		{
			Span sp = Span(4);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- addRange() -->" << std::endl;

		try
		{
			Span sp = Span(8);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			for (int i = 0; i < 5; i++)
				std::cout << sp[i] << " ";
			std::cout << std::endl;

			std::vector<int> tmp;
			for (int i = 0; i < 10; i++)
				tmp.push_back(100 + i);

			sp.addRange(tmp.begin(), tmp.begin() + 3);

			for (int i = 0; i < 8; i++)
				std::cout << sp[i] << " ";
			std::cout << std::endl;
			std::cout << "OK" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- addRange(). Adding over the limit -->" << std::endl;

		try
		{
			Span sp = Span(8);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::vector<int> tmp;
			for (int i = 0; i < 10; i++)
				tmp.push_back(100 + i);

			sp.addRange(tmp.begin(), tmp.end());
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- shortestSpan() -->" << std::endl;

		try
		{
			Span sp = Span(10);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << "6, 3, 17, 9, 11. Result: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- shortestSpan(). Less than 2 item -->" << std::endl;

		try
		{
			Span sp = Span(1);
			sp.addNumber(6);
			std::cout << "Result: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- longestSpan() -->" << std::endl;

		try
		{
			Span sp = Span(10);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << "6, 3, 17, 9, 11. Result: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--- longestSpan(). Less than 2 item -->" << std::endl;

		try
		{
			Span sp = Span(1);
			sp.addNumber(6);
			std::cout << "Result: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
