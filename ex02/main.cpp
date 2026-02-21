/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 18:09:40 by drahwanj          #+#    #+#             */
/*   Updated: 2026/02/21 18:09:40 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <string>
#include <iostream>
#include <list>

#define Container MutantStack<int>
#define Push	push

int	main(void)
{
	Container	stack;

	stack.Push(1);
	stack.Push(2);
	stack.Push(3);

	Container::const_iterator	s_it = stack.begin();
	Container::iterator	e_it = stack.end();

	
	while (s_it != e_it)
	{
		std::cout << *s_it << std::endl;
		s_it++;
	}
}
