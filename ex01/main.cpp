/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:09:09 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/19 14:25:47 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	addnameT(T const& t)
{
	std::cout << "param = " << t << std::endl;
}

int main()
{
	int tab[4] = {0, 1, 2, 3};
	iter(tab, 4, addnameT);

	std::string tabs[2] = {"salut", "ca va"};
	iter(tabs, 2, addnameT);

	float tabf[2] = {-42.6f, 1.3f};
	iter(tabf, 2, addnameT);
	
}