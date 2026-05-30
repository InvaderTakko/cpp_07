/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:17:17 by sruff             #+#    #+#             */
/*   Updated: 2026/05/30 15:00:37 by sruff            ###   ########.fr       */
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

void printConstInt(const int &element)
{
	std::cout << element << " ";
}

void addOne(int &element)
{
	element++;
}

int	main(void)
{
	int		arr[] = {1, 2, 3, 4, 5};
	size_t	len;

	std::string strArr[] = {"hello", "world", "42"};
	len = 5;
	std::cout << "Int array: ";
	::iter(arr, len, printElement<int>);
	std::cout << std::endl;
	std::cout << "String array: ";
	::iter(strArr, 3, printElement<std::string>);
	std::cout << std::endl;
	std::cout << "Int array: ";
	::iter(arr, len, incrementElement<int>);
	::iter(arr, len, printElement<int>);
	std::cout << std::endl;

	const int constArr[] = {10, 20, 30};
	std::cout << "Const int array: ";
	::iter(constArr, 3, printConstInt);
	std::cout << std::endl;

	int plainArr[] = {0, 0, 0};
	std::cout << "Plain function addOne: ";
	::iter(plainArr, 3, addOne);
	::iter(plainArr, 3, printElement<int>);
	std::cout << std::endl;

	double dblArr[] = {1.1, 2.2, 3.3};
	std::cout << "Double array: ";
	::iter(dblArr, 3, incrementElement<double>);
	::iter(dblArr, 3, printElement<double>);
	std::cout << std::endl;

	// std::cout << "String array: ";
	// ::iter(strArr, 1, incrementElement);
	// ::iter(strArr, 3, printElement);
	// std::cout << std::endl;
	return (0);
}
