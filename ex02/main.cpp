/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:42:01 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/04 22:19:53 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try {
        std::cout << "Test start" << std::endl;
        Array<int> arr1;
        std::cout << "Size of arr1: " << arr1.size() << std::endl;

        Array<int> arr2(5);
        std::cout << "Size of arr2: " << arr2.size() << std::endl;
        for (unsigned int i = 0; i < arr2.size(); ++i) {
            arr2[i] = i * 10;
        }

        Array<int> arr3 = arr2;
        std::cout << "arr3 after copying arr2: ";
        for (unsigned int i = 0; i < arr3.size(); ++i) {
            std::cout << arr3[i] << " ";
        }
        std::cout << std::endl;

        Array<int> arr4;
        arr4 = arr2;
        std::cout << "arr4 after assignment: ";
        for (unsigned int i = 0; i < arr4.size(); ++i) {
            std::cout << arr4[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Accessing out of bounds: ";
        std::cout << arr2[10] << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}