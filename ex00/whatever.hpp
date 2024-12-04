/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:59:46 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/04 20:59:48 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

template<typename T>
void swap(T &a,T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(const T &a, const T &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template<typename T>
T max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}