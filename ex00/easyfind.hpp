/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:12:05 by drahwanj          #+#    #+#             */
/*   Updated: 2026/02/21 16:12:06 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>
#include <iostream>
#include <exception>

class NposException: public std::exception
{
	public:
		virtual const char	*what() const throw()
		{
			return ("Not Found");
		}
};

template <typename T>
typename T::iterator	easyfind(T &in, int i)
{
	typename T::iterator	it;

	it = find(in.begin(), in.end(), i);
	if (it == in.end())
		throw (NposException());
	return (it);
}

#endif