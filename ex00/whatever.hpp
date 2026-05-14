/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:17:10 by sruff             #+#    #+#             */
/*   Updated: 2026/05/14 16:47:17 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T> void swap(T &a, T &b)
{
 T c;
 c = a;
 a = b;
 b = c;
}

template <typename T> T min(T const &a, T const &b)
{

	if (a > b)
		return (b);
	else if (b > a)
		return (a);
	else if (a == b)
		return (b);
	return (b);
}

template <typename T> T max(T const &a, T const &b)
{
	if (a > b)
		return (a);
	else if (b > a)
		return (b);
	else if (a == b)
		return (b);
	return (b);
}

#endif
