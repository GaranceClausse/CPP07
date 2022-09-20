/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:31:05 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/20 09:55:52 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array()
{
	_array = new T[0];
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int i)
{
	T *tmp = new T();
	
	_array = new T[i];
	_size = i;
	for (unsigned int y = 0; y < _size; y++)
		_array[y] = *tmp;
	delete tmp;
}

template <typename T>
Array<T>::~Array()
{
	delete []_array;
}

template <typename T>
Array<T>::Array(Array const& copy)
{
	_array = NULL;
	operator=(copy);
}

template <typename T>
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

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i >= _size || i < 0)
		throw (std::exception());
	return (_array[i]);
}

template <class T>
void		Array<T>::getStream(std::ostream& stream) const
{
	if (this->_size == 0)
		return ;
	unsigned int i;
	for (i = 0; i < _size - 1; i++)
		stream << _array[i] << ", ";
	stream << _array[i] << ".";
}

template <class T>
std::ostream&	operator<<(std::ostream& stream, Array<T>const& copy)
{
	copy.getStream(stream);
	return (stream);
}

template <typename T>
unsigned int Array<T>::size()
{
	return (this->_size);
}