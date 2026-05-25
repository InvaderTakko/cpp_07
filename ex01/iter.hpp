/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:17:14 by sruff             #+#    #+#             */
/*   Updated: 2026/05/25 14:01:50 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>

template <typename T, typename F> void iter(T *array, const size_t length,
	F func) // dont use void (*func)(T &) so function can take const T void print(const int&), F becomes void (*)(const int&).
//void increment(int&), F becomes void (*)(int&).
{
	if (array == nullptr || func == nullptr)
		return;
	size_t	i;

	i = 0;
	while (i < length)
	{
		func(array[i++]);
	}
}

#endif
