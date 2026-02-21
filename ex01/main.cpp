/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:32:44 by drahwanj          #+#    #+#             */
/*   Updated: 2026/02/21 16:32:44 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>

int	main(void)
{
	std::cout << "TEST #1" << std::endl;
	{
		Span	spn(2);

		try
		{
			spn.addNumber(15);
			spn.addNumber(17);
			spn.addNumber(44);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "Shortest Span: " << spn.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << spn.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "TEST #2" << std::endl;
	{
		Span	spn(20);
		std::vector<int>	vect;
		std::list<int>		list;

		list.push_back(-1);
		list.push_back(0);
		vect.push_back(15);
		vect.push_back(2);
		vect.push_back(77);
		vect.push_back(7);

		try
		{
			spn.addNumber(-13);
			spn.addNumber(17);
			spn.addNumber(-12);
			spn.addNumber(55);
			spn.addNumber(18);
			spn.addNumber(-99);
			spn.addNumber(list.begin(), list.end());
			spn.addNumber(vect.begin(), vect.end());
			std::cout << "Shortest Span: " << spn.shortestSpan() << std::endl;
			std::cout << "Longest Span: " << spn.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "TEST #3" << std::endl;
	{
		Span	spn(2);

		try 
		{
			spn.addNumber(-22);
			spn.addNumber(-15);
			std::cout << "Shortest Span: " << spn.shortestSpan() << std::endl;
			std::cout << "Longest Span: " << spn.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "TEST #4" << std::endl;
	{
		Span	spn(5);

		try 
		{
			spn.addNumber(-22);
			std::cout << "Shortest Span: " << spn.shortestSpan() << std::endl;
			std::cout << "Longest Span: " << spn.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "TEST #5" << std::endl;
	{
		unsigned int size = 10000;
		Span	spn(size);
		std::vector<int>	vect;
		srand(time(NULL));
		for (size_t i = 0; i < size; i++)
			vect.push_back(rand());
		try
		{
			spn.addNumber(vect.begin(), vect.end());
			std::cout << "Shortest Span: " << spn.shortestSpan() << std::endl;
			std::cout << "Longest Span: " << spn.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}