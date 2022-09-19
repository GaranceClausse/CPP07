/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:25:48 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/19 14:06:55 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T const &min (T const &x, T const &y)
{
	return (x < y ? x : y);
}

template <typename T>
T const &max (T const &x, T const &y)
{
	return (x > y ? x : y);
}