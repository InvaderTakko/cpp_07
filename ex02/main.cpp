/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:46:53 by sruff             #+#    #+#             */
/*   Updated: 2026/06/01 14:54:57 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

template <typename T> void dump(Array<T> const &arr)
{
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << (i + 1 < arr.size() ? " " : "");
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << "---- empty array ----" << std::endl;
	Array<int> empty;
	std::cout << "size: " << empty.size() << std::endl;

	std::cout << "------------------" << std::endl;
	// new T[n]() should zero-init no garbage roulette
	Array<int> zeros(5);
	std::cout << "value-init: ";
	dump(zeros);

	std::cout << "------------------" << std::endl;
	Array<int> nums(5);
	for (unsigned int i = 0; i < nums.size(); i++)
		nums[i] = static_cast<int>(i * 11);
	std::cout << "filled: ";
	dump(nums);

	std::cout << "------------------" << std::endl;
	// copy ctor: mutate the clone, original stays put
	Array<int> clone(nums);
	clone[0] = 999;
	std::cout << "nums[0]=" << nums[0] << "  clone[0]=" << clone[0] << std::endl;

	std::cout << "------------------" << std::endl;
	Array<int> assigned;
	assigned = nums;
	assigned[1] = 777;
	std::cout << "nums[1]=" << nums[1] << "  assigned[1]=" << assigned[1] << std::endl;

	std::cout << "------------------" << std::endl;
	// classic footgun. self-assign better not blow up.
	Array<int> &same = nums;
	nums = same;
	nums[2] = 42;
	std::cout << "self-assign ok, nums[2]=" << nums[2] << std::endl;

	std::cout << "------------------" << std::endl;
	// int is boring. strings actually test deep copy.
	Array<std::string> words(3);
	words[0] = "templates";
	words[1] = "are";
	words[2] = "fine";
	Array<std::string> wordsCopy(words);
	wordsCopy[0] = "allegedly";
	std::cout << "words[0]=" << words[0] << "  copy[0]=" << wordsCopy[0] << std::endl;

	std::cout << "------------------" << std::endl;
	// bounds checks on mutable, empty, and const paths
	try
	{
		nums[100] = 1;
	}
	catch (std::exception const &e)
	{
		std::cout << "nums[100]: " << e.what() << std::endl;
	}
	try
	{
		empty[0] = 1;
	}
	catch (std::exception const &e)
	{
		std::cout << "empty[0]: " << e.what() << std::endl;
	}
	Array<int> const frozen(nums);
	try
	{
		std::cout << frozen[99] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << "const[99]: " << e.what() << std::endl;
	}

	return (0);
}
