/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:17:17 by sruff             #+#    #+#             */
/*   Updated: 2026/05/15 19:49:10 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T> void printElement(T &element)
{
	std::cout << element << " ";
}

template <typename T> void incrementElement(T &element)
{
	// if constexpr (std::is_arithmetic<T>::value)
	// checks if type is arithmetic(allows ++)
	element++; // element cant be NULL so no checks
}

int	main(void)
{
	int		arr[] = {1, 2, 3, 4, 5};
	size_t	len;

	std::string strArr[] = {"hello", "world", "42"};
	len = 5;
	std::cout << "Int array: ";
	::iter(arr, len, printElement);
	std::cout << std::endl;
	std::cout << "String array: ";
	::iter(strArr, 3, printElement);
	std::cout << std::endl;
	std::cout << "Int array: ";
	::iter(arr, len, incrementElement);
	::iter(arr, len, printElement);
	std::cout << std::endl;
	// std::cout << "String array: ";
	// ::iter(strArr, 1, incrementElement);
	// ::iter(strArr, 3, printElement);
	// std::cout << std::endl;
	return (0);
}
