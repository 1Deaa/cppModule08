/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:19:38 by drahwanj          #+#    #+#             */
/*   Updated: 2026/02/21 16:19:39 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int>	vect;

	vect.push_back(55);
	vect.push_back(42);
	vect.push_back(57);

	std::vector<int>::const_iterator	it = vect.end();

	try
	{
		const int search = 53;
		std::cout << "Searching for: " << search << std::endl;
		it = easyfind(vect, search);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		const int search = 42;
		std::cout << "Searching for: " << search << std::endl;
		it = easyfind(vect, search);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

}