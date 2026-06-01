/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:17:14 by sruff             #+#    #+#             */
/*   Updated: 2026/05/25 16:03:39 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>
// dont use void (*func)(T &) so function can take const T void print(const int&),
//	F becomes void (*)(const int&).
// void increment(int&), F becomes void (*)(int&).

template <typename T, typename F> void iter(T *array, const size_t length,
	F func)
{
	size_t	i;

	if (array == nullptr || func == nullptr)
		return ;
	i = 0;
	while (i < length)
	{
		func(array[i++]);
	}
}

//template <typename T>
//void iter(T *array, size_t length, void (*func)(T &)); would still infer the type 
// making this possible :
// this works without <int>:
//::iter(arr, len, printElement);
#endif
