/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:31:05 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/19 14:38:47 by gclausse         ###   ########.fr       */
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