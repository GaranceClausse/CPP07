/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:27:42 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/20 09:55:46 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>

template <typename T>
class Array {
	public :
			Array();
			Array(unsigned int i);
			~Array();
			Array(Array<T> const&);
			Array<T>&		operator=(Array<T> const&);
			T&		operator[](unsigned int i);
			void	getStream(std::ostream& stream) const;
			unsigned int size();

	private :
			T 	*_array;
			unsigned int _size;
};

template <class T>
std::ostream&	operator<<(std::ostream& stream, Array<T> const &copy);

#include "Array.tpp"