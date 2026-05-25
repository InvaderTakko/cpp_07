/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:18:41 by sruff             #+#    #+#             */
/*   Updated: 2026/05/25 14:07:55 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <cstddef>
template <typename T> Array<T>::Array() : _elements(NULL), _size(0)
{
	// if (_elements == 0)
	// 	_elements = NULL;							body not needed better behaviour with auto initializer
	// this->_elements = new T[this->_size];
}

template <typename T> Array<T>::Array(unsigned int n) : _elements(new T[n]()),
	_size(n)
{
	// this->_elements = new T[n];
	// for (size_t i =0; i < _size; i++)
	// 	_elements = copy.
	//return (this._elements);
	//  new T[n]()
}

template <typename T> Array<T>::Array(const Array &other) : _elements(NULL),
	_size(0)
{
	_size = other._size;
	_elements = new T[_size]();
	 for (size_t i =0; i < _size; i++)
	 	_elements[i] = other._elements[i];
	// deep copy
}

template <typename T> Array<T>::~Array()
{
	// delete[]
	delete[] _elements;
}

template <typename T> Array<T> &Array<T>::operator=(const Array &other)
{
	// deep copy and assignment
	if (this != &other)
	{
		delete[] _elements;
		_size = other._size;
		_elements = new T[_size]();
		for (size_t i =0; i < _size; i++)
			_elements[i] = other._elements[i];
	}
	return (*this);
}

template <typename T> T &Array<T>::operator[](unsigned int index)
{
	// check bounds and throw exception
	if (index >= _size)
		throw OutOfBoundsException();
	return (_elements[index]);
}

template <typename T> const T &Array<T>::operator[](unsigned int index) const
{
	// check bounds and throw exception
	if (index >= _size)
		throw OutOfBoundsException();
	return (_elements[index]);
}

template <typename T> unsigned int Array<T>::size() const
{
	return (_size);
}

#endif
