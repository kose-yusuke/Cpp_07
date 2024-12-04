/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:59:51 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/04 21:09:31 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include<iostream>

template<typename T_array, typename T_function>
void iter(T_array *array, size_t len, void(*f)(T_function &))
{
    for (size_t i=0;len>i;i++)
        f(array[i]);
}