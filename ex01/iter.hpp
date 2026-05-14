/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:17:14 by sruff             #+#    #+#             */
/*   Updated: 2026/05/14 17:23:31 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>

template <typename T> void iter(T *array, const size_t length,
	void (*func)(T &))
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		func(array[i++]);
	}
}

#endif
