/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:59:59 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/04 21:28:07 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void twice(int &d)
{
    d *=2;
}

void capitalize(char &c)
{
    if (islower(c)) 
        c = c - 32;
}

int main()
{
    std::cout << "Test Start : int" << std::endl;
    int int_arr[] = {41, 42, 43};
    std::cout << "Original" << std::endl;
    for (int i = 0; i < 3; i++)
		std::cout << int_arr[i] << std::endl;
    std::cout << "Run template func" << std::endl;
    ::iter(int_arr,3,twice);
    for (int i = 0; i < 3; i++)
		std::cout << int_arr[i] << std::endl;

    std::cout << std::endl;

    std::cout << "Test Start : char" << std::endl;
    char char_arr[] = {'a','b','c'};
    std::cout << "Original" << std::endl;
    for (int i = 0; i < 3; i++)
		std::cout << char_arr[i] << std::endl;
    std::cout << "Run template func" << std::endl;
    ::iter(char_arr,3,capitalize);
    for (int i = 0; i < 3; i++)
		std::cout << char_arr[i] << std::endl;
}