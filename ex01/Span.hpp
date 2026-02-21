/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:40:49 by drahwanj          #+#    #+#             */
/*   Updated: 2026/02/21 16:40:49 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iterator>
#include <exception>
#include <iostream>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_container;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span	&operator=(const Span &other);
		~Span();
	public:
		void			addNumber(int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
	public:
		class SpanFullException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class SpanEmptyException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
	public:
		template <typename T>
		void	addNumber(T begin, T end)
		{
			if (_container.size() + std::distance(begin, end) > _N)
				throw (SpanFullException());
			_container.insert(_container.end(), begin, end);
		}
};

#endif
