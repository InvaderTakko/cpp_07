/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:17:17 by sruff             #+#    #+#             */
/*   Updated: 2026/05/14 17:23:19 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T> void printElement(T &element)
{
	std::cout << element << " ";
}

int	main(void)
{
	int		arr[] = {1, 2, 3, 4, 5};
	size_t	len;

	len = 5;
	std::cout << "Int array: ";
	::iter(arr, len, printElement);
	std::cout << std::endl;
	std::string strArr[] = {"hello", "world", "42"};
	std::cout << "String array: ";
	::iter(strArr, 3, printElement);
	std::cout << std::endl;
	return (0);
}
