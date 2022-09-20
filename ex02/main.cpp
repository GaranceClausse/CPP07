/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:35:43 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/20 10:12:56 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
int main(void)
{
	
	try
	{
		std::cout << "Let's create 3 arrays of ints : " << std::endl;
		Array<int> x;
		Array<int> y(3);
		Array<int> z(3);
		y[0] = 0;
		y[1] = 1;
		y[2] = 2;
		z[0] = 3;
		z[1] = 4;
		z[2] = 5;
		
		std::cout << "x = " << x << std::endl;
		std::cout << "y = " << y << std::endl;
		std::cout << "z = " << z << std::endl<< std::endl;
		std::cout << "******************************************* " << std::endl;
		std::cout << "Now, if z = y : " << std::endl;
		z = y;
		std::cout << "z = " << z << std::endl<< std::endl;
		
		std::cout << "******************************************* " << std::endl;
		std::cout << "Now, if we try to access z[3] which doesn't exists : " << std::endl;
		z[3] = 42;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "******************************************* " << std::endl;
	std::cout << "Now, let's create 2 arrays of strings : " << std::endl;
	
	try
	{
		Array<std::string> a(2);
		Array<std::string> b(3);
		a[0] = "Salut";
		a[1] = "ca va?";
		b[0] = "Merci";
		b[1] = "tres";
		b[2] = "bien";
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl<< std::endl;
		std::cout << "******************************************* " << std::endl;
		std::cout << "Now, if b = a : " << std::endl;
		b = a;
		std::cout << "b = " << b << std::endl<< std::endl;
		
		std::cout << "******************************************* " << std::endl;
		std::cout << "Now, if we try to access b[2] which doesn't exists anymore: " << std::endl;
		b[3] = "YO!";
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}