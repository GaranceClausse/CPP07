/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:09:09 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/21 11:39:36 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

//class Awesome {
//	public:
//	Awesome(void): _n(42){return;}
//	int get(void) const {return this->_n;}
//	private: int _n;
//};
//std::ostream &operator<<(std::ostream &o, const Awesome &a){o << a.get(); return o;}
//template <typename T>
//void print(T const &x) {std::cout << x << std::endl; return;}
//int main(){
//	int tab[] = {0, 1,2,3,4};
//	Awesome tab2[5];
//	iter(tab,5,print);
//	iter(tab2, 5, print);
//	return 0;
//}


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