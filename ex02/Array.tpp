/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:31:05 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/19 14:46:09 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array<T>::Array()
{
	_array = new T[0];
	_size = 0;
}

Array<T>::Array(unsigned int i)
{
	T *tmp = new T();
	
	_array = new T[i];
	_size = i;
	for (unsigned int y = 0; y < _size; y++)
		_array[y] = *tmp;
	delete tmp;
}

Array<T>::~Array()
{
	delete []_array;
}

Array<T>::Array(Array const& copy)
{
	_array = NULL;
	operator=(copy);
}

Array<T>&	Array<T>::operator=(Array<T> const& copy)
{
	if (_array != NULL)
		delete[] _array;
	_size = copy._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = copy._array[i];
	return (*this);
}

unsigned int Array<T>::size()
{
	return (this->_size);
}