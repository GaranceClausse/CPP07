/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:27:42 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/19 14:35:12 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
class Array {
	public :
			Array();
			Array(unsigned int i);

	private :
			T 	*_array;
			unsigned int _size;
};