/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 18:10:02 by drahwanj          #+#    #+#             */
/*   Updated: 2026/02/21 18:10:03 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		typedef	std::stack<T> stack;
		typedef typename stack::container_type		container;
		typedef typename container::iterator		iterator;
		typedef typename container::const_iterator	const_iterator;

		MutantStack(): std::stack<T>() {}
		MutantStack(const MutantStack &other): stack(other) {}
		~MutantStack() {}

		MutantStack	&operator=(const MutantStack &other)
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return (*this);
		}

		iterator begin()
		{
			return (this->c.begin());
		}

		const_iterator begin() const
		{
			return (this->c.begin());
		}

		iterator end()
		{
			return (this->c.end());
		}

		const_iterator end() const
		{
			return (this->c.end());
		}
};

#endif