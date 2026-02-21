/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:40:45 by drahwanj          #+#    #+#             */
/*   Updated: 2026/02/21 16:40:45 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0)
{

}

Span::Span(unsigned int N): _N(N)
{
	this->_container.reserve(N);
} 

Span::Span(const Span &other)
{
	*this = other;
}

Span	&Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_N = other._N;
		this->_container = other._container;
	}
	return (*this);
}

Span::~Span()
{
	
}

void	Span::addNumber(int num)
{
	if (_container.size() >= _N)
		throw (SpanFullException());
	_container.push_back(num);
}

unsigned int	Span::shortestSpan()
{
	if (_container.size() <= 1)
		throw (SpanEmptyException());
	std::vector<int>	temp = _container;
	std::sort(temp.begin(), temp.end());
	int	shortest = temp[1] - temp[0];
	for (std::size_t i = 1; i < temp.size(); i++)
	{
		if (temp[i] - temp[i - 1] < shortest)
			shortest = temp[i] - temp[i - 1];
		if (shortest == 0)
			break ;
	}
	return (shortest);
}

unsigned int	Span::longestSpan()
{
	if (_container.size() <= 1)
		throw (SpanEmptyException());
	std::vector<int>	temp = _container;
	std::sort(temp.begin(), temp.end());
	return (temp[temp.size() - 1] - temp[0]);
}

const char	*Span::SpanEmptyException::what() const throw() 
{
	return ("Span is empty");
}

const char	*Span::SpanFullException::what() const throw()
{
	return ("Span is full");
}
