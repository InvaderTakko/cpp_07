/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:17:21 by sruff             #+#    #+#             */
/*   Updated: 2026/05/14 17:26:49 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template <typename T> class Array
{
  private:
	T *_elements;
	unsigned int _size;

  public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	~Array();

	Array &operator=(const Array &other);
	T &operator[](unsigned int index);
	const T &operator[](unsigned int index) const;

	unsigned int size() const;

	class OutOfBoundsException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Index out of bounds");
		}
	};
};

# include "Array.tpp"

#endif
