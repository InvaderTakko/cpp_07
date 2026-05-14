/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:18:41 by sruff             #+#    #+#             */
/*   Updated: 2026/05/14 19:56:41 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T> Array<T>::Array() : _elements(NULL), _size(0)
{
}

template <typename T> Array<T>::Array(unsigned int n) : _elements(new T[n]()),
	_size(n)
{
	this._elements = new T[n];
	return (this._elements);
	// To be implemented: new T[n]()
}

template <typename T> Array<T>::Array(const Array &other) : _elements(NULL),
	_size(0)
{
	// deep copy
}

template <typename T> Array<T>::~Array()
{
	// delete[]
}

template <typename T> Array<T> &Array<T>::operator=(const Array &other)
{
	// deep copy and assignment
	return (*this);
}

template <typename T> T &Array<T>::operator[](unsigned int index)
{
	// check bounds and throw exception
	throw OutOfBoundsException();
}

template <typename T> const T &Array<T>::operator[](unsigned int index) const
{
	// check bounds and throw exception
	throw OutOfBoundsException();
}

template <typename T> unsigned int Array<T>::size() const
{
	return (_size);
}

#endif
